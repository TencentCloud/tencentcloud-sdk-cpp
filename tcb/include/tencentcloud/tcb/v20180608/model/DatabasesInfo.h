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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DATABASESINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DATABASESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 数据库资源信息
                */
                class DatabasesInfo : public AbstractModel
                {
                public:
                    DatabasesInfo();
                    ~DatabasesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据库唯一标识</p>
                     * @return InstanceId <p>数据库唯一标识</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>数据库唯一标识</p>
                     * @param _instanceId <p>数据库唯一标识</p>
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
                     * 获取<p>状态。包含以下取值：</p><li>INITIALIZING：资源初始化中</li><li>RUNNING：运行中，可正常使用的状态</li><li>UNUSABLE：禁用，不可用</li><li>OVERDUE：资源过期</li>
                     * @return Status <p>状态。包含以下取值：</p><li>INITIALIZING：资源初始化中</li><li>RUNNING：运行中，可正常使用的状态</li><li>UNUSABLE：禁用，不可用</li><li>OVERDUE：资源过期</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态。包含以下取值：</p><li>INITIALIZING：资源初始化中</li><li>RUNNING：运行中，可正常使用的状态</li><li>UNUSABLE：禁用，不可用</li><li>OVERDUE：资源过期</li>
                     * @param _status <p>状态。包含以下取值：</p><li>INITIALIZING：资源初始化中</li><li>RUNNING：运行中，可正常使用的状态</li><li>UNUSABLE：禁用，不可用</li><li>OVERDUE：资源过期</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>所属地域。<br>当前支持ap-shanghai</p>
                     * @return Region <p>所属地域。<br>当前支持ap-shanghai</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>所属地域。<br>当前支持ap-shanghai</p>
                     * @param _region <p>所属地域。<br>当前支持ap-shanghai</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>数据库唯一标识</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>状态。包含以下取值：</p><li>INITIALIZING：资源初始化中</li><li>RUNNING：运行中，可正常使用的状态</li><li>UNUSABLE：禁用，不可用</li><li>OVERDUE：资源过期</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>所属地域。<br>当前支持ap-shanghai</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DATABASESINFO_H_
