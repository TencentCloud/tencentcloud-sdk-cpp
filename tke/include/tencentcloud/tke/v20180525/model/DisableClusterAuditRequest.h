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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DISABLECLUSTERAUDITREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DISABLECLUSTERAUDITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DisableClusterAudit请求参数结构体
                */
                class DisableClusterAuditRequest : public AbstractModel
                {
                public:
                    DisableClusterAuditRequest();
                    ~DisableClusterAuditRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>取值为true代表关闭集群审计时删除默认创建的日志集和主题，false代表不删除</p>
                     * @return DeleteLogSetAndTopic <p>取值为true代表关闭集群审计时删除默认创建的日志集和主题，false代表不删除</p>
                     * 
                     */
                    bool GetDeleteLogSetAndTopic() const;

                    /**
                     * 设置<p>取值为true代表关闭集群审计时删除默认创建的日志集和主题，false代表不删除</p>
                     * @param _deleteLogSetAndTopic <p>取值为true代表关闭集群审计时删除默认创建的日志集和主题，false代表不删除</p>
                     * 
                     */
                    void SetDeleteLogSetAndTopic(const bool& _deleteLogSetAndTopic);

                    /**
                     * 判断参数 DeleteLogSetAndTopic 是否已赋值
                     * @return DeleteLogSetAndTopic 是否已赋值
                     * 
                     */
                    bool DeleteLogSetAndTopicHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>取值为true代表关闭集群审计时删除默认创建的日志集和主题，false代表不删除</p>
                     */
                    bool m_deleteLogSetAndTopic;
                    bool m_deleteLogSetAndTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DISABLECLUSTERAUDITREQUEST_H_
