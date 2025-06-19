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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTEROMITREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTEROMITREQUEST_H_

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
                * CreateAlertCenterOmit请求参数结构体
                */
                class CreateAlertCenterOmitRequest : public AbstractModel
                {
                public:
                    CreateAlertCenterOmitRequest();
                    ~CreateAlertCenterOmitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取处置对象,ID列表，  IdLists和IpList二选一
                     * @return HandleIdList 处置对象,ID列表，  IdLists和IpList二选一
                     * 
                     */
                    std::vector<std::string> GetHandleIdList() const;

                    /**
                     * 设置处置对象,ID列表，  IdLists和IpList二选一
                     * @param _handleIdList 处置对象,ID列表，  IdLists和IpList二选一
                     * 
                     */
                    void SetHandleIdList(const std::vector<std::string>& _handleIdList);

                    /**
                     * 判断参数 HandleIdList 是否已赋值
                     * @return HandleIdList 是否已赋值
                     * 
                     */
                    bool HandleIdListHasBeenSet() const;

                    /**
                     * 获取忽略数据来源：
AlertTable 告警中心  InterceptionTable拦截列表
                     * @return TableType 忽略数据来源：
AlertTable 告警中心  InterceptionTable拦截列表
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置忽略数据来源：
AlertTable 告警中心  InterceptionTable拦截列表
                     * @param _tableType 忽略数据来源：
AlertTable 告警中心  InterceptionTable拦截列表
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取处置对象,事件ID列表
                     * @return HandleEventIdList 处置对象,事件ID列表
                     * 
                     */
                    std::vector<std::string> GetHandleEventIdList() const;

                    /**
                     * 设置处置对象,事件ID列表
                     * @param _handleEventIdList 处置对象,事件ID列表
                     * 
                     */
                    void SetHandleEventIdList(const std::vector<std::string>& _handleEventIdList);

                    /**
                     * 判断参数 HandleEventIdList 是否已赋值
                     * @return HandleEventIdList 是否已赋值
                     * 
                     */
                    bool HandleEventIdListHasBeenSet() const;

                private:

                    /**
                     * 处置对象,ID列表，  IdLists和IpList二选一
                     */
                    std::vector<std::string> m_handleIdList;
                    bool m_handleIdListHasBeenSet;

                    /**
                     * 忽略数据来源：
AlertTable 告警中心  InterceptionTable拦截列表
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * 处置对象,事件ID列表
                     */
                    std::vector<std::string> m_handleEventIdList;
                    bool m_handleEventIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTEROMITREQUEST_H_
