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

#include <tencentcloud/mrs/v20200910/model/TestItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

TestItem::TestItem() :
    m_iDHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_utilHasBeenSet(false),
    m_isNormalHasBeenSet(false),
    m_isExceedHasBeenSet(false)
{
}

CoreInternalOutcome TestItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TestItem.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Error("response `TestItem.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `TestItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Error("response `TestItem.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Range") && !value["Range"].IsNull())
    {
        if (!value["Range"].IsString())
        {
            return CoreInternalOutcome(Error("response `TestItem.Range` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_range = string(value["Range"].GetString());
        m_rangeHasBeenSet = true;
    }

    if (value.HasMember("Util") && !value["Util"].IsNull())
    {
        if (!value["Util"].IsString())
        {
            return CoreInternalOutcome(Error("response `TestItem.Util` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_util = string(value["Util"].GetString());
        m_utilHasBeenSet = true;
    }

    if (value.HasMember("IsNormal") && !value["IsNormal"].IsNull())
    {
        if (!value["IsNormal"].IsBool())
        {
            return CoreInternalOutcome(Error("response `TestItem.IsNormal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNormal = value["IsNormal"].GetBool();
        m_isNormalHasBeenSet = true;
    }

    if (value.HasMember("IsExceed") && !value["IsExceed"].IsNull())
    {
        if (!value["IsExceed"].IsBool())
        {
            return CoreInternalOutcome(Error("response `TestItem.IsExceed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExceed = value["IsExceed"].GetBool();
        m_isExceedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TestItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_range.c_str(), allocator).Move(), allocator);
    }

    if (m_utilHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Util";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_util.c_str(), allocator).Move(), allocator);
    }

    if (m_isNormalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNormal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNormal, allocator);
    }

    if (m_isExceedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExceed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExceed, allocator);
    }

}


int64_t TestItem::GetID() const
{
    return m_iD;
}

void TestItem::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool TestItem::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string TestItem::GetCode() const
{
    return m_code;
}

void TestItem::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool TestItem::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string TestItem::GetName() const
{
    return m_name;
}

void TestItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TestItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TestItem::GetResult() const
{
    return m_result;
}

void TestItem::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool TestItem::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string TestItem::GetRange() const
{
    return m_range;
}

void TestItem::SetRange(const string& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool TestItem::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}

string TestItem::GetUtil() const
{
    return m_util;
}

void TestItem::SetUtil(const string& _util)
{
    m_util = _util;
    m_utilHasBeenSet = true;
}

bool TestItem::UtilHasBeenSet() const
{
    return m_utilHasBeenSet;
}

bool TestItem::GetIsNormal() const
{
    return m_isNormal;
}

void TestItem::SetIsNormal(const bool& _isNormal)
{
    m_isNormal = _isNormal;
    m_isNormalHasBeenSet = true;
}

bool TestItem::IsNormalHasBeenSet() const
{
    return m_isNormalHasBeenSet;
}

bool TestItem::GetIsExceed() const
{
    return m_isExceed;
}

void TestItem::SetIsExceed(const bool& _isExceed)
{
    m_isExceed = _isExceed;
    m_isExceedHasBeenSet = true;
}

bool TestItem::IsExceedHasBeenSet() const
{
    return m_isExceedHasBeenSet;
}

