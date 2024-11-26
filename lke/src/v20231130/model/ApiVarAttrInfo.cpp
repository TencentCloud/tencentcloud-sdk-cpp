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

#include <tencentcloud/lke/v20231130/model/ApiVarAttrInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ApiVarAttrInfo::ApiVarAttrInfo() :
    m_apiVarIdHasBeenSet(false),
    m_attrBizIdHasBeenSet(false)
{
}

CoreInternalOutcome ApiVarAttrInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiVarId") && !value["ApiVarId"].IsNull())
    {
        if (!value["ApiVarId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiVarAttrInfo.ApiVarId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiVarId = string(value["ApiVarId"].GetString());
        m_apiVarIdHasBeenSet = true;
    }

    if (value.HasMember("AttrBizId") && !value["AttrBizId"].IsNull())
    {
        if (!value["AttrBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiVarAttrInfo.AttrBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attrBizId = string(value["AttrBizId"].GetString());
        m_attrBizIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiVarAttrInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiVarIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiVarId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiVarId.c_str(), allocator).Move(), allocator);
    }

    if (m_attrBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attrBizId.c_str(), allocator).Move(), allocator);
    }

}


string ApiVarAttrInfo::GetApiVarId() const
{
    return m_apiVarId;
}

void ApiVarAttrInfo::SetApiVarId(const string& _apiVarId)
{
    m_apiVarId = _apiVarId;
    m_apiVarIdHasBeenSet = true;
}

bool ApiVarAttrInfo::ApiVarIdHasBeenSet() const
{
    return m_apiVarIdHasBeenSet;
}

string ApiVarAttrInfo::GetAttrBizId() const
{
    return m_attrBizId;
}

void ApiVarAttrInfo::SetAttrBizId(const string& _attrBizId)
{
    m_attrBizId = _attrBizId;
    m_attrBizIdHasBeenSet = true;
}

bool ApiVarAttrInfo::AttrBizIdHasBeenSet() const
{
    return m_attrBizIdHasBeenSet;
}

