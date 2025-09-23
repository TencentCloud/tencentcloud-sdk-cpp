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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESNAPSHOTREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Tag.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateInstanceSnapshot请求参数结构体
                */
                class CreateInstanceSnapshotRequest : public AbstractModel
                {
                public:
                    CreateInstanceSnapshotRequest();
                    ~CreateInstanceSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要创建快照的实例 ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/product/1207/47573) 接口返回值中的 InstanceId	获取。
                     * @return InstanceId 需要创建快照的实例 ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/product/1207/47573) 接口返回值中的 InstanceId	获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置需要创建快照的实例 ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/product/1207/47573) 接口返回值中的 InstanceId	获取。
                     * @param _instanceId 需要创建快照的实例 ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/product/1207/47573) 接口返回值中的 InstanceId	获取。
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
                     * 获取快照名称，最长为 60 个字符。
                     * @return SnapshotName 快照名称，最长为 60 个字符。
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置快照名称，最长为 60 个字符。
                     * @param _snapshotName 快照名称，最长为 60 个字符。
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取标签键和标签值。 如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。 同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。 如果标签不存在会为您自动创建标签。 数组最多支持10个元素。
                     * @return Tags 标签键和标签值。 如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。 同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。 如果标签不存在会为您自动创建标签。 数组最多支持10个元素。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签键和标签值。 如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。 同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。 如果标签不存在会为您自动创建标签。 数组最多支持10个元素。
                     * @param _tags 标签键和标签值。 如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。 同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。 如果标签不存在会为您自动创建标签。 数组最多支持10个元素。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 需要创建快照的实例 ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/product/1207/47573) 接口返回值中的 InstanceId	获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 快照名称，最长为 60 个字符。
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 标签键和标签值。 如果指定多个标签，则会为指定资源同时创建并绑定该多个标签。 同一个资源上的同一个标签键只能对应一个标签值。如果您尝试添加已有标签键，则对应的标签值会更新为新值。 如果标签不存在会为您自动创建标签。 数组最多支持10个元素。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESNAPSHOTREQUEST_H_
