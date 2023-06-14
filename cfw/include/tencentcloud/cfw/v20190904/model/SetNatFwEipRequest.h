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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SETNATFWEIPREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SETNATFWEIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * SetNatFwEip请求参数结构体
                */
                class SetNatFwEipRequest : public AbstractModel
                {
                public:
                    SetNatFwEipRequest();
                    ~SetNatFwEipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取bind：绑定eip；unbind：解绑eip；newAdd：新增防火墙弹性公网ip
                     * @return OperationType bind：绑定eip；unbind：解绑eip；newAdd：新增防火墙弹性公网ip
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置bind：绑定eip；unbind：解绑eip；newAdd：新增防火墙弹性公网ip
                     * @param _operationType bind：绑定eip；unbind：解绑eip；newAdd：新增防火墙弹性公网ip
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取防火墙实例id
                     * @return CfwInstance 防火墙实例id
                     * 
                     */
                    std::string GetCfwInstance() const;

                    /**
                     * 设置防火墙实例id
                     * @param _cfwInstance 防火墙实例id
                     * 
                     */
                    void SetCfwInstance(const std::string& _cfwInstance);

                    /**
                     * 判断参数 CfwInstance 是否已赋值
                     * @return CfwInstance 是否已赋值
                     * 
                     */
                    bool CfwInstanceHasBeenSet() const;

                    /**
                     * 获取当OperationType 为bind或unbind操作时，使用该字段。
                     * @return EipList 当OperationType 为bind或unbind操作时，使用该字段。
                     * 
                     */
                    std::vector<std::string> GetEipList() const;

                    /**
                     * 设置当OperationType 为bind或unbind操作时，使用该字段。
                     * @param _eipList 当OperationType 为bind或unbind操作时，使用该字段。
                     * 
                     */
                    void SetEipList(const std::vector<std::string>& _eipList);

                    /**
                     * 判断参数 EipList 是否已赋值
                     * @return EipList 是否已赋值
                     * 
                     */
                    bool EipListHasBeenSet() const;

                private:

                    /**
                     * bind：绑定eip；unbind：解绑eip；newAdd：新增防火墙弹性公网ip
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 防火墙实例id
                     */
                    std::string m_cfwInstance;
                    bool m_cfwInstanceHasBeenSet;

                    /**
                     * 当OperationType 为bind或unbind操作时，使用该字段。
                     */
                    std::vector<std::string> m_eipList;
                    bool m_eipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SETNATFWEIPREQUEST_H_
