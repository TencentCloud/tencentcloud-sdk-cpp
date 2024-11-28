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

#include <tencentcloud/bi/v20220105/model/PageScreenListVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

PageScreenListVO::PageScreenListVO() :
    m_picTypeHasBeenSet(false),
    m_listHasBeenSet(false),
    m_tranIdHasBeenSet(false),
    m_tranStatusHasBeenSet(false)
{
}

CoreInternalOutcome PageScreenListVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PicType") && !value["PicType"].IsNull())
    {
        if (!value["PicType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PageScreenListVO.PicType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_picType = string(value["PicType"].GetString());
        m_picTypeHasBeenSet = true;
    }

    if (value.HasMember("List") && !value["List"].IsNull())
    {
        if (!value["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PageScreenListVO.List` is not array type"));

        const rapidjson::Value &tmpValue = value["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PageScreenVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_list.push_back(item);
        }
        m_listHasBeenSet = true;
    }

    if (value.HasMember("TranId") && !value["TranId"].IsNull())
    {
        if (!value["TranId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PageScreenListVO.TranId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranId = string(value["TranId"].GetString());
        m_tranIdHasBeenSet = true;
    }

    if (value.HasMember("TranStatus") && !value["TranStatus"].IsNull())
    {
        if (!value["TranStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PageScreenListVO.TranStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tranStatus = value["TranStatus"].GetInt64();
        m_tranStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PageScreenListVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_picTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_picType.c_str(), allocator).Move(), allocator);
    }

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tranIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranId.c_str(), allocator).Move(), allocator);
    }

    if (m_tranStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tranStatus, allocator);
    }

}


string PageScreenListVO::GetPicType() const
{
    return m_picType;
}

void PageScreenListVO::SetPicType(const string& _picType)
{
    m_picType = _picType;
    m_picTypeHasBeenSet = true;
}

bool PageScreenListVO::PicTypeHasBeenSet() const
{
    return m_picTypeHasBeenSet;
}

vector<PageScreenVO> PageScreenListVO::GetList() const
{
    return m_list;
}

void PageScreenListVO::SetList(const vector<PageScreenVO>& _list)
{
    m_list = _list;
    m_listHasBeenSet = true;
}

bool PageScreenListVO::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

string PageScreenListVO::GetTranId() const
{
    return m_tranId;
}

void PageScreenListVO::SetTranId(const string& _tranId)
{
    m_tranId = _tranId;
    m_tranIdHasBeenSet = true;
}

bool PageScreenListVO::TranIdHasBeenSet() const
{
    return m_tranIdHasBeenSet;
}

int64_t PageScreenListVO::GetTranStatus() const
{
    return m_tranStatus;
}

void PageScreenListVO::SetTranStatus(const int64_t& _tranStatus)
{
    m_tranStatus = _tranStatus;
    m_tranStatusHasBeenSet = true;
}

bool PageScreenListVO::TranStatusHasBeenSet() const
{
    return m_tranStatusHasBeenSet;
}

