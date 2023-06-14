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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEEXTERNALANCHORREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEEXTERNALANCHORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateExternalAnchor请求参数结构体
                */
                class CreateExternalAnchorRequest : public AbstractModel
                {
                public:
                    CreateExternalAnchorRequest();
                    ~CreateExternalAnchorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台业务系统唯一标示的主播id
                     * @return Uid 平台业务系统唯一标示的主播id
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置平台业务系统唯一标示的主播id
                     * @param _uid 平台业务系统唯一标示的主播id
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取主播名称
                     * @return Name 主播名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置主播名称
                     * @param _name 主播名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取身份证号
                     * @return IdNo 身份证号
                     * 
                     */
                    std::string GetIdNo() const;

                    /**
                     * 设置身份证号
                     * @param _idNo 身份证号
                     * 
                     */
                    void SetIdNo(const std::string& _idNo);

                    /**
                     * 判断参数 IdNo 是否已赋值
                     * @return IdNo 是否已赋值
                     * 
                     */
                    bool IdNoHasBeenSet() const;

                    /**
                     * 获取身份证正面图片下载链接
                     * @return IdCardFront 身份证正面图片下载链接
                     * 
                     */
                    std::string GetIdCardFront() const;

                    /**
                     * 设置身份证正面图片下载链接
                     * @param _idCardFront 身份证正面图片下载链接
                     * 
                     */
                    void SetIdCardFront(const std::string& _idCardFront);

                    /**
                     * 判断参数 IdCardFront 是否已赋值
                     * @return IdCardFront 是否已赋值
                     * 
                     */
                    bool IdCardFrontHasBeenSet() const;

                    /**
                     * 获取身份证反面图片下载链接
                     * @return IdCardReverse 身份证反面图片下载链接
                     * 
                     */
                    std::string GetIdCardReverse() const;

                    /**
                     * 设置身份证反面图片下载链接
                     * @param _idCardReverse 身份证反面图片下载链接
                     * 
                     */
                    void SetIdCardReverse(const std::string& _idCardReverse);

                    /**
                     * 判断参数 IdCardReverse 是否已赋值
                     * @return IdCardReverse 是否已赋值
                     * 
                     */
                    bool IdCardReverseHasBeenSet() const;

                    /**
                     * 获取指定分配的代理商ID
                     * @return AgentId 指定分配的代理商ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置指定分配的代理商ID
                     * @param _agentId 指定分配的代理商ID
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                private:

                    /**
                     * 平台业务系统唯一标示的主播id
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 主播名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 身份证号
                     */
                    std::string m_idNo;
                    bool m_idNoHasBeenSet;

                    /**
                     * 身份证正面图片下载链接
                     */
                    std::string m_idCardFront;
                    bool m_idCardFrontHasBeenSet;

                    /**
                     * 身份证反面图片下载链接
                     */
                    std::string m_idCardReverse;
                    bool m_idCardReverseHasBeenSet;

                    /**
                     * 指定分配的代理商ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEEXTERNALANCHORREQUEST_H_
