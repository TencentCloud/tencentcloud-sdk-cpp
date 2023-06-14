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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_AUDITAPPLYCLIENTREQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_AUDITAPPLYCLIENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * AuditApplyClient请求参数结构体
                */
                class AuditApplyClientRequest : public AbstractModel
                {
                public:
                    AuditApplyClientRequest();
                    ~AuditApplyClientRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待审核客户账号ID
                     * @return ClientUin 待审核客户账号ID
                     * 
                     */
                    std::string GetClientUin() const;

                    /**
                     * 设置待审核客户账号ID
                     * @param _clientUin 待审核客户账号ID
                     * 
                     */
                    void SetClientUin(const std::string& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取审核结果，可能的取值：accept/reject
                     * @return AuditResult 审核结果，可能的取值：accept/reject
                     * 
                     */
                    std::string GetAuditResult() const;

                    /**
                     * 设置审核结果，可能的取值：accept/reject
                     * @param _auditResult 审核结果，可能的取值：accept/reject
                     * 
                     */
                    void SetAuditResult(const std::string& _auditResult);

                    /**
                     * 判断参数 AuditResult 是否已赋值
                     * @return AuditResult 是否已赋值
                     * 
                     */
                    bool AuditResultHasBeenSet() const;

                    /**
                     * 获取申请理由，B类客户审核通过时必须填写申请理由
                     * @return Note 申请理由，B类客户审核通过时必须填写申请理由
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置申请理由，B类客户审核通过时必须填写申请理由
                     * @param _note 申请理由，B类客户审核通过时必须填写申请理由
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                private:

                    /**
                     * 待审核客户账号ID
                     */
                    std::string m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 审核结果，可能的取值：accept/reject
                     */
                    std::string m_auditResult;
                    bool m_auditResultHasBeenSet;

                    /**
                     * 申请理由，B类客户审核通过时必须填写申请理由
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_AUDITAPPLYCLIENTREQUEST_H_
