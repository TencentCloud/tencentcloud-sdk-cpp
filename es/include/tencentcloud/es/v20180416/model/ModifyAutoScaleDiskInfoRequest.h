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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_MODIFYAUTOSCALEDISKINFOREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_MODIFYAUTOSCALEDISKINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/AutoScaleDiskInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ModifyAutoScaleDiskInfo请求参数结构体
                */
                class ModifyAutoScaleDiskInfoRequest : public AbstractModel
                {
                public:
                    ModifyAutoScaleDiskInfoRequest();
                    ~ModifyAutoScaleDiskInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例名称
                     * @return InstanceId 实例名称
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例名称
                     * @param _instanceId 实例名称
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
                     * 获取自动扩盘参数列表
                     * @return AutoScaleDiskInfoList 自动扩盘参数列表
                     * 
                     */
                    std::vector<AutoScaleDiskInfo> GetAutoScaleDiskInfoList() const;

                    /**
                     * 设置自动扩盘参数列表
                     * @param _autoScaleDiskInfoList 自动扩盘参数列表
                     * 
                     */
                    void SetAutoScaleDiskInfoList(const std::vector<AutoScaleDiskInfo>& _autoScaleDiskInfoList);

                    /**
                     * 判断参数 AutoScaleDiskInfoList 是否已赋值
                     * @return AutoScaleDiskInfoList 是否已赋值
                     * 
                     */
                    bool AutoScaleDiskInfoListHasBeenSet() const;

                    /**
                     * 获取需要删除的自动扩盘节点类型
                     * @return DeleteNodeTypeList 需要删除的自动扩盘节点类型
                     * 
                     */
                    std::vector<std::string> GetDeleteNodeTypeList() const;

                    /**
                     * 设置需要删除的自动扩盘节点类型
                     * @param _deleteNodeTypeList 需要删除的自动扩盘节点类型
                     * 
                     */
                    void SetDeleteNodeTypeList(const std::vector<std::string>& _deleteNodeTypeList);

                    /**
                     * 判断参数 DeleteNodeTypeList 是否已赋值
                     * @return DeleteNodeTypeList 是否已赋值
                     * 
                     */
                    bool DeleteNodeTypeListHasBeenSet() const;

                private:

                    /**
                     * 实例名称
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 自动扩盘参数列表
                     */
                    std::vector<AutoScaleDiskInfo> m_autoScaleDiskInfoList;
                    bool m_autoScaleDiskInfoListHasBeenSet;

                    /**
                     * 需要删除的自动扩盘节点类型
                     */
                    std::vector<std::string> m_deleteNodeTypeList;
                    bool m_deleteNodeTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_MODIFYAUTOSCALEDISKINFOREQUEST_H_
