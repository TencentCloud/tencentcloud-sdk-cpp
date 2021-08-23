/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/trtc/v20190722/model/OneSdkAppIdUsagesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

OneSdkAppIdUsagesInfo::OneSdkAppIdUsagesInfo() :
    m_totalNumHasBeenSet(false),
    m_sdkAppIdTrtcTimeUsagesHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false)
{
}

CoreInternalOutcome OneSdkAppIdUsagesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalNum") && !value["TotalNum"].IsNull())
    {
        if (!value["TotalNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OneSdkAppIdUsagesInfo.TotalNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = value["TotalNum"].GetUint64();
        m_totalNumHasBeenSet = true;
    }

    if (value.HasMember("SdkAppIdTrtcTimeUsages") && !value["SdkAppIdTrtcTimeUsages"].IsNull())
    {
        if (!value["SdkAppIdTrtcTimeUsages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OneSdkAppIdUsagesInfo.SdkAppIdTrtcTimeUsages` is not array type"));

        const rapidjson::Value &tmpValue = value["SdkAppIdTrtcTimeUsages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SdkAppIdTrtcUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sdkAppIdTrtcTimeUsages.push_back(item);
        }
        m_sdkAppIdTrtcTimeUsagesHasBeenSet = true;
    }

    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OneSdkAppIdUsagesInfo.SdkAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = string(value["SdkAppId"].GetString());
        m_sdkAppIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OneSdkAppIdUsagesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_sdkAppIdTrtcTimeUsagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppIdTrtcTimeUsages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sdkAppIdTrtcTimeUsages.begin(); itr != m_sdkAppIdTrtcTimeUsages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkAppId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t OneSdkAppIdUsagesInfo::GetTotalNum() const
{
    return m_totalNum;
}

void OneSdkAppIdUsagesInfo::SetTotalNum(const uint64_t& _totalNum)
{
    m_totalNum = _totalNum;
    m_totalNumHasBeenSet = true;
}

bool OneSdkAppIdUsagesInfo::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

vector<SdkAppIdTrtcUsage> OneSdkAppIdUsagesInfo::GetSdkAppIdTrtcTimeUsages() const
{
    return m_sdkAppIdTrtcTimeUsages;
}

void OneSdkAppIdUsagesInfo::SetSdkAppIdTrtcTimeUsages(const vector<SdkAppIdTrtcUsage>& _sdkAppIdTrtcTimeUsages)
{
    m_sdkAppIdTrtcTimeUsages = _sdkAppIdTrtcTimeUsages;
    m_sdkAppIdTrtcTimeUsagesHasBeenSet = true;
}

bool OneSdkAppIdUsagesInfo::SdkAppIdTrtcTimeUsagesHasBeenSet() const
{
    return m_sdkAppIdTrtcTimeUsagesHasBeenSet;
}

string OneSdkAppIdUsagesInfo::GetSdkAppId() const
{
    return m_sdkAppId;
}

void OneSdkAppIdUsagesInfo::SetSdkAppId(const string& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool OneSdkAppIdUsagesInfo::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

