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

#include <tencentcloud/ocr/v20181119/model/TextWaybill.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TextWaybill::TextWaybill() :
    m_recNameHasBeenSet(false),
    m_recNumHasBeenSet(false),
    m_recAddrHasBeenSet(false),
    m_senderNameHasBeenSet(false),
    m_senderNumHasBeenSet(false),
    m_senderAddrHasBeenSet(false),
    m_waybillNumHasBeenSet(false)
{
}

CoreInternalOutcome TextWaybill::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecName") && !value["RecName"].IsNull())
    {
        if (!value["RecName"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextWaybill.RecName` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_recName.Deserialize(value["RecName"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_recNameHasBeenSet = true;
    }

    if (value.HasMember("RecNum") && !value["RecNum"].IsNull())
    {
        if (!value["RecNum"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextWaybill.RecNum` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_recNum.Deserialize(value["RecNum"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_recNumHasBeenSet = true;
    }

    if (value.HasMember("RecAddr") && !value["RecAddr"].IsNull())
    {
        if (!value["RecAddr"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextWaybill.RecAddr` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_recAddr.Deserialize(value["RecAddr"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_recAddrHasBeenSet = true;
    }

    if (value.HasMember("SenderName") && !value["SenderName"].IsNull())
    {
        if (!value["SenderName"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextWaybill.SenderName` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_senderName.Deserialize(value["SenderName"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_senderNameHasBeenSet = true;
    }

    if (value.HasMember("SenderNum") && !value["SenderNum"].IsNull())
    {
        if (!value["SenderNum"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextWaybill.SenderNum` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_senderNum.Deserialize(value["SenderNum"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_senderNumHasBeenSet = true;
    }

    if (value.HasMember("SenderAddr") && !value["SenderAddr"].IsNull())
    {
        if (!value["SenderAddr"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextWaybill.SenderAddr` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_senderAddr.Deserialize(value["SenderAddr"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_senderAddrHasBeenSet = true;
    }

    if (value.HasMember("WaybillNum") && !value["WaybillNum"].IsNull())
    {
        if (!value["WaybillNum"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextWaybill.WaybillNum` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_waybillNum.Deserialize(value["WaybillNum"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_waybillNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextWaybill::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_recName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_recNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_recNum.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_recAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_recAddr.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_senderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SenderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_senderName.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_senderNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SenderNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_senderNum.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_senderAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SenderAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_senderAddr.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_waybillNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaybillNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_waybillNum.ToJsonObject(value[key.c_str()], allocator);
    }

}


WaybillObj TextWaybill::GetRecName() const
{
    return m_recName;
}

void TextWaybill::SetRecName(const WaybillObj& _recName)
{
    m_recName = _recName;
    m_recNameHasBeenSet = true;
}

bool TextWaybill::RecNameHasBeenSet() const
{
    return m_recNameHasBeenSet;
}

WaybillObj TextWaybill::GetRecNum() const
{
    return m_recNum;
}

void TextWaybill::SetRecNum(const WaybillObj& _recNum)
{
    m_recNum = _recNum;
    m_recNumHasBeenSet = true;
}

bool TextWaybill::RecNumHasBeenSet() const
{
    return m_recNumHasBeenSet;
}

WaybillObj TextWaybill::GetRecAddr() const
{
    return m_recAddr;
}

void TextWaybill::SetRecAddr(const WaybillObj& _recAddr)
{
    m_recAddr = _recAddr;
    m_recAddrHasBeenSet = true;
}

bool TextWaybill::RecAddrHasBeenSet() const
{
    return m_recAddrHasBeenSet;
}

WaybillObj TextWaybill::GetSenderName() const
{
    return m_senderName;
}

void TextWaybill::SetSenderName(const WaybillObj& _senderName)
{
    m_senderName = _senderName;
    m_senderNameHasBeenSet = true;
}

bool TextWaybill::SenderNameHasBeenSet() const
{
    return m_senderNameHasBeenSet;
}

WaybillObj TextWaybill::GetSenderNum() const
{
    return m_senderNum;
}

void TextWaybill::SetSenderNum(const WaybillObj& _senderNum)
{
    m_senderNum = _senderNum;
    m_senderNumHasBeenSet = true;
}

bool TextWaybill::SenderNumHasBeenSet() const
{
    return m_senderNumHasBeenSet;
}

WaybillObj TextWaybill::GetSenderAddr() const
{
    return m_senderAddr;
}

void TextWaybill::SetSenderAddr(const WaybillObj& _senderAddr)
{
    m_senderAddr = _senderAddr;
    m_senderAddrHasBeenSet = true;
}

bool TextWaybill::SenderAddrHasBeenSet() const
{
    return m_senderAddrHasBeenSet;
}

WaybillObj TextWaybill::GetWaybillNum() const
{
    return m_waybillNum;
}

void TextWaybill::SetWaybillNum(const WaybillObj& _waybillNum)
{
    m_waybillNum = _waybillNum;
    m_waybillNumHasBeenSet = true;
}

bool TextWaybill::WaybillNumHasBeenSet() const
{
    return m_waybillNumHasBeenSet;
}

