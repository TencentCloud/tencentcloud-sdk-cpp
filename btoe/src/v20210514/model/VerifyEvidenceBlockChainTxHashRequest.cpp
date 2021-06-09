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

#include <tencentcloud/btoe/v20210514/model/VerifyEvidenceBlockChainTxHashRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Btoe::V20210514::Model;
using namespace std;

VerifyEvidenceBlockChainTxHashRequest::VerifyEvidenceBlockChainTxHashRequest() :
    m_evidenceTxHashHasBeenSet(false)
{
}

string VerifyEvidenceBlockChainTxHashRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_evidenceTxHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceTxHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_evidenceTxHash.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyEvidenceBlockChainTxHashRequest::GetEvidenceTxHash() const
{
    return m_evidenceTxHash;
}

void VerifyEvidenceBlockChainTxHashRequest::SetEvidenceTxHash(const string& _evidenceTxHash)
{
    m_evidenceTxHash = _evidenceTxHash;
    m_evidenceTxHashHasBeenSet = true;
}

bool VerifyEvidenceBlockChainTxHashRequest::EvidenceTxHashHasBeenSet() const
{
    return m_evidenceTxHashHasBeenSet;
}


