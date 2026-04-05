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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_KVNAMESPACE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_KVNAMESPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ComponentReference.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * KV 命名空间信息，包含命名空间的基本属性、存储容量使用情况以及被引用关系。KV 命名空间是边缘函数存储键值对数据的容器，可在边缘函数中通过绑定方式进行读写操作。
                */
                class KVNamespace : public AbstractModel
                {
                public:
                    KVNamespace();
                    ~KVNamespace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间名称。在同站点下具有唯一性。
                     * @return Namespace 命名空间名称。在同站点下具有唯一性。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间名称。在同站点下具有唯一性。
                     * @param _namespace 命名空间名称。在同站点下具有唯一性。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取命名空间描述。创建时填写的备注信息，用于说明命名空间的用途或业务含义。最大支持 256 个字符。
                     * @return Remark 命名空间描述。创建时填写的备注信息，用于说明命名空间的用途或业务含义。最大支持 256 个字符。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置命名空间描述。创建时填写的备注信息，用于说明命名空间的用途或业务含义。最大支持 256 个字符。
                     * @param _remark 命名空间描述。创建时填写的备注信息，用于说明命名空间的用途或业务含义。最大支持 256 个字符。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取KV 存储空间可用容量，单位为字节（Byte）。表示该命名空间可存储数据的最大容量上限，当前默认为 1 GB。
                     * @return Capacity KV 存储空间可用容量，单位为字节（Byte）。表示该命名空间可存储数据的最大容量上限，当前默认为 1 GB。
                     * 
                     */
                    int64_t GetCapacity() const;

                    /**
                     * 设置KV 存储空间可用容量，单位为字节（Byte）。表示该命名空间可存储数据的最大容量上限，当前默认为 1 GB。
                     * @param _capacity KV 存储空间可用容量，单位为字节（Byte）。表示该命名空间可存储数据的最大容量上限，当前默认为 1 GB。
                     * 
                     */
                    void SetCapacity(const int64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取KV 存储空间已用容量，单位为字节（Byte）。表示该命名空间当前已使用的存储空间大小。
                     * @return CapacityUsed KV 存储空间已用容量，单位为字节（Byte）。表示该命名空间当前已使用的存储空间大小。
                     * 
                     */
                    int64_t GetCapacityUsed() const;

                    /**
                     * 设置KV 存储空间已用容量，单位为字节（Byte）。表示该命名空间当前已使用的存储空间大小。
                     * @param _capacityUsed KV 存储空间已用容量，单位为字节（Byte）。表示该命名空间当前已使用的存储空间大小。
                     * 
                     */
                    void SetCapacityUsed(const int64_t& _capacityUsed);

                    /**
                     * 判断参数 CapacityUsed 是否已赋值
                     * @return CapacityUsed 是否已赋值
                     * 
                     */
                    bool CapacityUsedHasBeenSet() const;

                    /**
                     * 获取命名空间被引用实例的列表。展示当前命名空间被哪些边缘函数实例引用，以及引用的站点信息。若未被引用，则返回空数组。
                     * @return References 命名空间被引用实例的列表。展示当前命名空间被哪些边缘函数实例引用，以及引用的站点信息。若未被引用，则返回空数组。
                     * 
                     */
                    std::vector<ComponentReference> GetReferences() const;

                    /**
                     * 设置命名空间被引用实例的列表。展示当前命名空间被哪些边缘函数实例引用，以及引用的站点信息。若未被引用，则返回空数组。
                     * @param _references 命名空间被引用实例的列表。展示当前命名空间被哪些边缘函数实例引用，以及引用的站点信息。若未被引用，则返回空数组。
                     * 
                     */
                    void SetReferences(const std::vector<ComponentReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取命名空间的创建时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。
                     * @return CreatedOn 命名空间的创建时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置命名空间的创建时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。
                     * @param _createdOn 命名空间的创建时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取命名空间的最后修改时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。
                     * @return ModifiedOn 命名空间的最后修改时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置命名空间的最后修改时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。
                     * @param _modifiedOn 命名空间的最后修改时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * 命名空间名称。在同站点下具有唯一性。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 命名空间描述。创建时填写的备注信息，用于说明命名空间的用途或业务含义。最大支持 256 个字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * KV 存储空间可用容量，单位为字节（Byte）。表示该命名空间可存储数据的最大容量上限，当前默认为 1 GB。
                     */
                    int64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * KV 存储空间已用容量，单位为字节（Byte）。表示该命名空间当前已使用的存储空间大小。
                     */
                    int64_t m_capacityUsed;
                    bool m_capacityUsedHasBeenSet;

                    /**
                     * 命名空间被引用实例的列表。展示当前命名空间被哪些边缘函数实例引用，以及引用的站点信息。若未被引用，则返回空数组。
                     */
                    std::vector<ComponentReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * 命名空间的创建时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 命名空间的最后修改时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_KVNAMESPACE_H_
