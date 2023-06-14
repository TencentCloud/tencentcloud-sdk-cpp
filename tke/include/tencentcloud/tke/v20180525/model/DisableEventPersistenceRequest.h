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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DISABLEEVENTPERSISTENCEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DISABLEEVENTPERSISTENCEREQUEST_H_

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
                * DisableEventPersistence请求参数结构体
                */
                class DisableEventPersistenceRequest : public AbstractModel
                {
                public:
                    DisableEventPersistenceRequest();
                    ~DisableEventPersistenceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取取值为true代表关闭集群审计时删除默认创建的日志集和主题，false代表不删除
                     * @return DeleteLogSetAndTopic 取值为true代表关闭集群审计时删除默认创建的日志集和主题，false代表不删除
                     * 
                     */
                    bool GetDeleteLogSetAndTopic() const;

                    /**
                     * 设置取值为true代表关闭集群审计时删除默认创建的日志集和主题，false代表不删除
                     * @param _deleteLogSetAndTopic 取值为true代表关闭集群审计时删除默认创建的日志集和主题，false代表不删除
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
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 取值为true代表关闭集群审计时删除默认创建的日志集和主题，false代表不删除
                     */
                    bool m_deleteLogSetAndTopic;
                    bool m_deleteLogSetAndTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DISABLEEVENTPERSISTENCEREQUEST_H_
