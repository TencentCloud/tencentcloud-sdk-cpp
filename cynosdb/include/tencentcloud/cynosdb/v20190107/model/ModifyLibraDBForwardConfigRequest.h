/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBFORWARDCONFIGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBFORWARDCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ForwardInstanceInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyLibraDBForwardConfig请求参数结构体
                */
                class ModifyLibraDBForwardConfigRequest : public AbstractModel
                {
                public:
                    ModifyLibraDBForwardConfigRequest();
                    ~ModifyLibraDBForwardConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取只读分析引擎实例Id
                     * @return InstanceId 只读分析引擎实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置只读分析引擎实例Id
                     * @param _instanceId 只读分析引擎实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取转发模式
                     * @return ForwardMode 转发模式
                     * 
                     */
                    std::string GetForwardMode() const;

                    /**
                     * 设置转发模式
                     * @param _forwardMode 转发模式
                     * 
                     */
                    void SetForwardMode(const std::string& _forwardMode);

                    /**
                     * 判断参数 ForwardMode 是否已赋值
                     * @return ForwardMode 是否已赋值
                     * 
                     */
                    bool ForwardModeHasBeenSet() const;

                    /**
                     * 获取转发实例列表
                     * @return ForwardList 转发实例列表
                     * 
                     */
                    std::vector<ForwardInstanceInfo> GetForwardList() const;

                    /**
                     * 设置转发实例列表
                     * @param _forwardList 转发实例列表
                     * 
                     */
                    void SetForwardList(const std::vector<ForwardInstanceInfo>& _forwardList);

                    /**
                     * 判断参数 ForwardList 是否已赋值
                     * @return ForwardList 是否已赋值
                     * 
                     */
                    bool ForwardListHasBeenSet() const;

                private:

                    /**
                     * 只读分析引擎实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 转发模式
                     */
                    std::string m_forwardMode;
                    bool m_forwardModeHasBeenSet;

                    /**
                     * 转发实例列表
                     */
                    std::vector<ForwardInstanceInfo> m_forwardList;
                    bool m_forwardListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBFORWARDCONFIGREQUEST_H_
