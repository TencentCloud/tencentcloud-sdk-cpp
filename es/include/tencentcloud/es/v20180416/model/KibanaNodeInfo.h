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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_KIBANANODEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_KIBANANODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 实例Kibana节点相关信息
                */
                class KibanaNodeInfo : public AbstractModel
                {
                public:
                    KibanaNodeInfo();
                    ~KibanaNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Kibana节点规格
                     * @return KibanaNodeType Kibana节点规格
                     * 
                     */
                    std::string GetKibanaNodeType() const;

                    /**
                     * 设置Kibana节点规格
                     * @param _kibanaNodeType Kibana节点规格
                     * 
                     */
                    void SetKibanaNodeType(const std::string& _kibanaNodeType);

                    /**
                     * 判断参数 KibanaNodeType 是否已赋值
                     * @return KibanaNodeType 是否已赋值
                     * 
                     */
                    bool KibanaNodeTypeHasBeenSet() const;

                    /**
                     * 获取Kibana节点个数
                     * @return KibanaNodeNum Kibana节点个数
                     * 
                     */
                    uint64_t GetKibanaNodeNum() const;

                    /**
                     * 设置Kibana节点个数
                     * @param _kibanaNodeNum Kibana节点个数
                     * 
                     */
                    void SetKibanaNodeNum(const uint64_t& _kibanaNodeNum);

                    /**
                     * 判断参数 KibanaNodeNum 是否已赋值
                     * @return KibanaNodeNum 是否已赋值
                     * 
                     */
                    bool KibanaNodeNumHasBeenSet() const;

                    /**
                     * 获取Kibana节点CPU数
                     * @return KibanaNodeCpuNum Kibana节点CPU数
                     * 
                     */
                    uint64_t GetKibanaNodeCpuNum() const;

                    /**
                     * 设置Kibana节点CPU数
                     * @param _kibanaNodeCpuNum Kibana节点CPU数
                     * 
                     */
                    void SetKibanaNodeCpuNum(const uint64_t& _kibanaNodeCpuNum);

                    /**
                     * 判断参数 KibanaNodeCpuNum 是否已赋值
                     * @return KibanaNodeCpuNum 是否已赋值
                     * 
                     */
                    bool KibanaNodeCpuNumHasBeenSet() const;

                    /**
                     * 获取Kibana节点内存GB
                     * @return KibanaNodeMemSize Kibana节点内存GB
                     * 
                     */
                    uint64_t GetKibanaNodeMemSize() const;

                    /**
                     * 设置Kibana节点内存GB
                     * @param _kibanaNodeMemSize Kibana节点内存GB
                     * 
                     */
                    void SetKibanaNodeMemSize(const uint64_t& _kibanaNodeMemSize);

                    /**
                     * 判断参数 KibanaNodeMemSize 是否已赋值
                     * @return KibanaNodeMemSize 是否已赋值
                     * 
                     */
                    bool KibanaNodeMemSizeHasBeenSet() const;

                    /**
                     * 获取Kibana节点磁盘类型
                     * @return KibanaNodeDiskType Kibana节点磁盘类型
                     * 
                     */
                    std::string GetKibanaNodeDiskType() const;

                    /**
                     * 设置Kibana节点磁盘类型
                     * @param _kibanaNodeDiskType Kibana节点磁盘类型
                     * 
                     */
                    void SetKibanaNodeDiskType(const std::string& _kibanaNodeDiskType);

                    /**
                     * 判断参数 KibanaNodeDiskType 是否已赋值
                     * @return KibanaNodeDiskType 是否已赋值
                     * 
                     */
                    bool KibanaNodeDiskTypeHasBeenSet() const;

                    /**
                     * 获取Kibana节点磁盘大小
                     * @return KibanaNodeDiskSize Kibana节点磁盘大小
                     * 
                     */
                    uint64_t GetKibanaNodeDiskSize() const;

                    /**
                     * 设置Kibana节点磁盘大小
                     * @param _kibanaNodeDiskSize Kibana节点磁盘大小
                     * 
                     */
                    void SetKibanaNodeDiskSize(const uint64_t& _kibanaNodeDiskSize);

                    /**
                     * 判断参数 KibanaNodeDiskSize 是否已赋值
                     * @return KibanaNodeDiskSize 是否已赋值
                     * 
                     */
                    bool KibanaNodeDiskSizeHasBeenSet() const;

                private:

                    /**
                     * Kibana节点规格
                     */
                    std::string m_kibanaNodeType;
                    bool m_kibanaNodeTypeHasBeenSet;

                    /**
                     * Kibana节点个数
                     */
                    uint64_t m_kibanaNodeNum;
                    bool m_kibanaNodeNumHasBeenSet;

                    /**
                     * Kibana节点CPU数
                     */
                    uint64_t m_kibanaNodeCpuNum;
                    bool m_kibanaNodeCpuNumHasBeenSet;

                    /**
                     * Kibana节点内存GB
                     */
                    uint64_t m_kibanaNodeMemSize;
                    bool m_kibanaNodeMemSizeHasBeenSet;

                    /**
                     * Kibana节点磁盘类型
                     */
                    std::string m_kibanaNodeDiskType;
                    bool m_kibanaNodeDiskTypeHasBeenSet;

                    /**
                     * Kibana节点磁盘大小
                     */
                    uint64_t m_kibanaNodeDiskSize;
                    bool m_kibanaNodeDiskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_KIBANANODEINFO_H_
