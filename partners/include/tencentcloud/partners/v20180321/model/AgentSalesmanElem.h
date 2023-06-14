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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTSALESMANELEM_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTSALESMANELEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 代理商业务员信息
                */
                class AgentSalesmanElem : public AbstractModel
                {
                public:
                    AgentSalesmanElem();
                    ~AgentSalesmanElem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代理商账号ID
                     * @return Uin 代理商账号ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置代理商账号ID
                     * @param _uin 代理商账号ID
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取业务员ID
                     * @return SalesUin 业务员ID
                     * 
                     */
                    std::string GetSalesUin() const;

                    /**
                     * 设置业务员ID
                     * @param _salesUin 业务员ID
                     * 
                     */
                    void SetSalesUin(const std::string& _salesUin);

                    /**
                     * 判断参数 SalesUin 是否已赋值
                     * @return SalesUin 是否已赋值
                     * 
                     */
                    bool SalesUinHasBeenSet() const;

                    /**
                     * 获取业务员姓名
                     * @return SalesName 业务员姓名
                     * 
                     */
                    std::string GetSalesName() const;

                    /**
                     * 设置业务员姓名
                     * @param _salesName 业务员姓名
                     * 
                     */
                    void SetSalesName(const std::string& _salesName);

                    /**
                     * 判断参数 SalesName 是否已赋值
                     * @return SalesName 是否已赋值
                     * 
                     */
                    bool SalesNameHasBeenSet() const;

                    /**
                     * 获取业务员创建时间
                     * @return CreateTime 业务员创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置业务员创建时间
                     * @param _createTime 业务员创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 代理商账号ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 业务员ID
                     */
                    std::string m_salesUin;
                    bool m_salesUinHasBeenSet;

                    /**
                     * 业务员姓名
                     */
                    std::string m_salesName;
                    bool m_salesNameHasBeenSet;

                    /**
                     * 业务员创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTSALESMANELEM_H_
