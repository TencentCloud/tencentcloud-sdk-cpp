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

#include <tencentcloud/cdwdoris/v20211228/model/ModifyInstanceKeyValConfigsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ModifyInstanceKeyValConfigsRequest::ModifyInstanceKeyValConfigsRequest() :
    m_instanceIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_addItemsHasBeenSet(false),
    m_updateItemsHasBeenSet(false),
    m_delItemsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_hotUpdateItemsHasBeenSet(false),
    m_deleteItemsHasBeenSet(false),
    m_iPAddressHasBeenSet(false)
{
}

string ModifyInstanceKeyValConfigsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_addItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addItems.begin(); itr != m_addItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_updateItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_updateItems.begin(); itr != m_updateItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_delItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_delItems.begin(); itr != m_delItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_hotUpdateItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotUpdateItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hotUpdateItems.begin(); itr != m_hotUpdateItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deleteItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deleteItems.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_iPAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iPAddress.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceKeyValConfigsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceKeyValConfigsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceKeyValConfigsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyInstanceKeyValConfigsRequest::GetFileName() const
{
    return m_fileName;
}

void ModifyInstanceKeyValConfigsRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ModifyInstanceKeyValConfigsRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

vector<InstanceConfigItem> ModifyInstanceKeyValConfigsRequest::GetAddItems() const
{
    return m_addItems;
}

void ModifyInstanceKeyValConfigsRequest::SetAddItems(const vector<InstanceConfigItem>& _addItems)
{
    m_addItems = _addItems;
    m_addItemsHasBeenSet = true;
}

bool ModifyInstanceKeyValConfigsRequest::AddItemsHasBeenSet() const
{
    return m_addItemsHasBeenSet;
}

vector<InstanceConfigItem> ModifyInstanceKeyValConfigsRequest::GetUpdateItems() const
{
    return m_updateItems;
}

void ModifyInstanceKeyValConfigsRequest::SetUpdateItems(const vector<InstanceConfigItem>& _updateItems)
{
    m_updateItems = _updateItems;
    m_updateItemsHasBeenSet = true;
}

bool ModifyInstanceKeyValConfigsRequest::UpdateItemsHasBeenSet() const
{
    return m_updateItemsHasBeenSet;
}

vector<InstanceConfigItem> ModifyInstanceKeyValConfigsRequest::GetDelItems() const
{
    return m_delItems;
}

void ModifyInstanceKeyValConfigsRequest::SetDelItems(const vector<InstanceConfigItem>& _delItems)
{
    m_delItems = _delItems;
    m_delItemsHasBeenSet = true;
}

bool ModifyInstanceKeyValConfigsRequest::DelItemsHasBeenSet() const
{
    return m_delItemsHasBeenSet;
}

string ModifyInstanceKeyValConfigsRequest::GetMessage() const
{
    return m_message;
}

void ModifyInstanceKeyValConfigsRequest::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ModifyInstanceKeyValConfigsRequest::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<InstanceConfigItem> ModifyInstanceKeyValConfigsRequest::GetHotUpdateItems() const
{
    return m_hotUpdateItems;
}

void ModifyInstanceKeyValConfigsRequest::SetHotUpdateItems(const vector<InstanceConfigItem>& _hotUpdateItems)
{
    m_hotUpdateItems = _hotUpdateItems;
    m_hotUpdateItemsHasBeenSet = true;
}

bool ModifyInstanceKeyValConfigsRequest::HotUpdateItemsHasBeenSet() const
{
    return m_hotUpdateItemsHasBeenSet;
}

InstanceConfigItem ModifyInstanceKeyValConfigsRequest::GetDeleteItems() const
{
    return m_deleteItems;
}

void ModifyInstanceKeyValConfigsRequest::SetDeleteItems(const InstanceConfigItem& _deleteItems)
{
    m_deleteItems = _deleteItems;
    m_deleteItemsHasBeenSet = true;
}

bool ModifyInstanceKeyValConfigsRequest::DeleteItemsHasBeenSet() const
{
    return m_deleteItemsHasBeenSet;
}

string ModifyInstanceKeyValConfigsRequest::GetIPAddress() const
{
    return m_iPAddress;
}

void ModifyInstanceKeyValConfigsRequest::SetIPAddress(const string& _iPAddress)
{
    m_iPAddress = _iPAddress;
    m_iPAddressHasBeenSet = true;
}

bool ModifyInstanceKeyValConfigsRequest::IPAddressHasBeenSet() const
{
    return m_iPAddressHasBeenSet;
}


