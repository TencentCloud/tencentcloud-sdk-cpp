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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMCLUSTERTAGSREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMCLUSTERTAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/Tag.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * ModifyDBCustomClusterTags请求参数结构体
                */
                class ModifyDBCustomClusterTagsRequest : public AbstractModel
                {
                public:
                    ModifyDBCustomClusterTagsRequest();
                    ~ModifyDBCustomClusterTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>DB Custom 集群ID</p><p>参数格式：dbcc-xxxxxxxx</p>
                     * @return ClusterId <p>DB Custom 集群ID</p><p>参数格式：dbcc-xxxxxxxx</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>DB Custom 集群ID</p><p>参数格式：dbcc-xxxxxxxx</p>
                     * @param _clusterId <p>DB Custom 集群ID</p><p>参数格式：dbcc-xxxxxxxx</p>
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
                     * 获取<p>为 DB Custom 集群绑定的标签信息</p><p>入参限制：参考标签平台的限制策略</p>
                     * @return AddTags <p>为 DB Custom 集群绑定的标签信息</p><p>入参限制：参考标签平台的限制策略</p>
                     * 
                     */
                    std::vector<Tag> GetAddTags() const;

                    /**
                     * 设置<p>为 DB Custom 集群绑定的标签信息</p><p>入参限制：参考标签平台的限制策略</p>
                     * @param _addTags <p>为 DB Custom 集群绑定的标签信息</p><p>入参限制：参考标签平台的限制策略</p>
                     * 
                     */
                    void SetAddTags(const std::vector<Tag>& _addTags);

                    /**
                     * 判断参数 AddTags 是否已赋值
                     * @return AddTags 是否已赋值
                     * 
                     */
                    bool AddTagsHasBeenSet() const;

                    /**
                     * 获取<p>为 DB Custom 集群删除的标签Key</p>
                     * @return DeleteTagKeys <p>为 DB Custom 集群删除的标签Key</p>
                     * 
                     */
                    std::vector<std::string> GetDeleteTagKeys() const;

                    /**
                     * 设置<p>为 DB Custom 集群删除的标签Key</p>
                     * @param _deleteTagKeys <p>为 DB Custom 集群删除的标签Key</p>
                     * 
                     */
                    void SetDeleteTagKeys(const std::vector<std::string>& _deleteTagKeys);

                    /**
                     * 判断参数 DeleteTagKeys 是否已赋值
                     * @return DeleteTagKeys 是否已赋值
                     * 
                     */
                    bool DeleteTagKeysHasBeenSet() const;

                private:

                    /**
                     * <p>DB Custom 集群ID</p><p>参数格式：dbcc-xxxxxxxx</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>为 DB Custom 集群绑定的标签信息</p><p>入参限制：参考标签平台的限制策略</p>
                     */
                    std::vector<Tag> m_addTags;
                    bool m_addTagsHasBeenSet;

                    /**
                     * <p>为 DB Custom 集群删除的标签Key</p>
                     */
                    std::vector<std::string> m_deleteTagKeys;
                    bool m_deleteTagKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMCLUSTERTAGSREQUEST_H_
