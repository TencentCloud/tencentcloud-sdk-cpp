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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_GOOSEFSXATTRIBUTE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_GOOSEFSXATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/MappedBucket.h>
#include <tencentcloud/goosefs/v20220519/model/ClientClusterManagerNodeInfo.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * GooseFSx文件系统的属性
                */
                class GooseFSxAttribute : public AbstractModel
                {
                public:
                    GooseFSxAttribute();
                    ~GooseFSxAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取GooseFSx的型号
                     * @return Model GooseFSx的型号
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置GooseFSx的型号
                     * @param _model GooseFSx的型号
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取容量单位是GB, 例如4608(4.5TB)
                     * @return Capacity 容量单位是GB, 例如4608(4.5TB)
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置容量单位是GB, 例如4608(4.5TB)
                     * @param _capacity 容量单位是GB, 例如4608(4.5TB)
                     * 
                     */
                    void SetCapacity(const uint64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取要关联映射的bucket列表
                     * @return MappedBucketList 要关联映射的bucket列表
                     * 
                     */
                    std::vector<MappedBucket> GetMappedBucketList() const;

                    /**
                     * 设置要关联映射的bucket列表
                     * @param _mappedBucketList 要关联映射的bucket列表
                     * 
                     */
                    void SetMappedBucketList(const std::vector<MappedBucket>& _mappedBucketList);

                    /**
                     * 判断参数 MappedBucketList 是否已赋值
                     * @return MappedBucketList 是否已赋值
                     * 
                     */
                    bool MappedBucketListHasBeenSet() const;

                    /**
                     * 获取客户侧管理节点信息
                     * @return ClientManagerNodeList 客户侧管理节点信息
                     * 
                     */
                    std::vector<ClientClusterManagerNodeInfo> GetClientManagerNodeList() const;

                    /**
                     * 设置客户侧管理节点信息
                     * @param _clientManagerNodeList 客户侧管理节点信息
                     * 
                     */
                    void SetClientManagerNodeList(const std::vector<ClientClusterManagerNodeInfo>& _clientManagerNodeList);

                    /**
                     * 判断参数 ClientManagerNodeList 是否已赋值
                     * @return ClientManagerNodeList 是否已赋值
                     * 
                     */
                    bool ClientManagerNodeListHasBeenSet() const;

                private:

                    /**
                     * GooseFSx的型号
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 容量单位是GB, 例如4608(4.5TB)
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * 要关联映射的bucket列表
                     */
                    std::vector<MappedBucket> m_mappedBucketList;
                    bool m_mappedBucketListHasBeenSet;

                    /**
                     * 客户侧管理节点信息
                     */
                    std::vector<ClientClusterManagerNodeInfo> m_clientManagerNodeList;
                    bool m_clientManagerNodeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_GOOSEFSXATTRIBUTE_H_
