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

#include <tencentcloud/cpdp/v20190820/model/QuerySinglePayResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QuerySinglePayResult::QuerySinglePayResult() :
    m_handleStatusHasBeenSet(false),
    m_handleMsgHasBeenSet(false),
    m_serialNoHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome QuerySinglePayResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HandleStatus") && !value["HandleStatus"].IsNull())
    {
        if (!value["HandleStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `QuerySinglePayResult.HandleStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handleStatus = string(value["HandleStatus"].GetString());
        m_handleStatusHasBeenSet = true;
    }

    if (value.HasMember("HandleMsg") && !value["HandleMsg"].IsNull())
    {
        if (!value["HandleMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `QuerySinglePayResult.HandleMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handleMsg = string(value["HandleMsg"].GetString());
        m_handleMsgHasBeenSet = true;
    }

    if (value.HasMember("SerialNo") && !value["SerialNo"].IsNull())
    {
        if (!value["SerialNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `QuerySinglePayResult.SerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNo = string(value["SerialNo"].GetString());
        m_serialNoHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Error("response `QuerySinglePayResult.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QuerySinglePayItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuerySinglePayResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_handleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handleStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_handleMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handleMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string QuerySinglePayResult::GetHandleStatus() const
{
    return m_handleStatus;
}

void QuerySinglePayResult::SetHandleStatus(const string& _handleStatus)
{
    m_handleStatus = _handleStatus;
    m_handleStatusHasBeenSet = true;
}

bool QuerySinglePayResult::HandleStatusHasBeenSet() const
{
    return m_handleStatusHasBeenSet;
}

string QuerySinglePayResult::GetHandleMsg() const
{
    return m_handleMsg;
}

void QuerySinglePayResult::SetHandleMsg(const string& _handleMsg)
{
    m_handleMsg = _handleMsg;
    m_handleMsgHasBeenSet = true;
}

bool QuerySinglePayResult::HandleMsgHasBeenSet() const
{
    return m_handleMsgHasBeenSet;
}

string QuerySinglePayResult::GetSerialNo() const
{
    return m_serialNo;
}

void QuerySinglePayResult::SetSerialNo(const string& _serialNo)
{
    m_serialNo = _serialNo;
    m_serialNoHasBeenSet = true;
}

bool QuerySinglePayResult::SerialNoHasBeenSet() const
{
    return m_serialNoHasBeenSet;
}

vector<QuerySinglePayItem> QuerySinglePayResult::GetItems() const
{
    return m_items;
}

void QuerySinglePayResult::SetItems(const vector<QuerySinglePayItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool QuerySinglePayResult::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

