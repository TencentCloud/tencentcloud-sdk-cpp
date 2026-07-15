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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_NODETYPEDISKSIZERANGE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_NODETYPEDISKSIZERANGE_H_

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
                * 磁盘上下限
                */
                class NodeTypeDiskSizeRange : public AbstractModel
                {
                public:
                    NodeTypeDiskSizeRange();
                    ~NodeTypeDiskSizeRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器类型
                     * @return NodeType 机器类型
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置机器类型
                     * @param _nodeType 机器类型
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点类型
                     * @return Type 节点类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置节点类型
                     * @param _type 节点类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取磁盘类型
                     * @return DiskType 磁盘类型
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型
                     * @param _diskType 磁盘类型
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取磁盘最小值
                     * @return Min 磁盘最小值
                     * 
                     */
                    uint64_t GetMin() const;

                    /**
                     * 设置磁盘最小值
                     * @param _min 磁盘最小值
                     * 
                     */
                    void SetMin(const uint64_t& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取中刻度值
                     * @return Med 中刻度值
                     * 
                     */
                    uint64_t GetMed() const;

                    /**
                     * 设置中刻度值
                     * @param _med 中刻度值
                     * 
                     */
                    void SetMed(const uint64_t& _med);

                    /**
                     * 判断参数 Med 是否已赋值
                     * @return Med 是否已赋值
                     * 
                     */
                    bool MedHasBeenSet() const;

                    /**
                     * 获取磁盘最大值
                     * @return Max 磁盘最大值
                     * 
                     */
                    uint64_t GetMax() const;

                    /**
                     * 设置磁盘最大值
                     * @param _max 磁盘最大值
                     * 
                     */
                    void SetMax(const uint64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取磁盘最小个数
                     * @return DiskCountMin 磁盘最小个数
                     * 
                     */
                    uint64_t GetDiskCountMin() const;

                    /**
                     * 设置磁盘最小个数
                     * @param _diskCountMin 磁盘最小个数
                     * 
                     */
                    void SetDiskCountMin(const uint64_t& _diskCountMin);

                    /**
                     * 判断参数 DiskCountMin 是否已赋值
                     * @return DiskCountMin 是否已赋值
                     * 
                     */
                    bool DiskCountMinHasBeenSet() const;

                    /**
                     * 获取磁盘最大个数
                     * @return DiskCountMax 磁盘最大个数
                     * 
                     */
                    uint64_t GetDiskCountMax() const;

                    /**
                     * 设置磁盘最大个数
                     * @param _diskCountMax 磁盘最大个数
                     * 
                     */
                    void SetDiskCountMax(const uint64_t& _diskCountMax);

                    /**
                     * 判断参数 DiskCountMax 是否已赋值
                     * @return DiskCountMax 是否已赋值
                     * 
                     */
                    bool DiskCountMaxHasBeenSet() const;

                    /**
                     * 获取是否加密盘
                     * @return DiskEncrypt 是否加密盘
                     * 
                     */
                    uint64_t GetDiskEncrypt() const;

                    /**
                     * 设置是否加密盘
                     * @param _diskEncrypt 是否加密盘
                     * 
                     */
                    void SetDiskEncrypt(const uint64_t& _diskEncrypt);

                    /**
                     * 判断参数 DiskEncrypt 是否已赋值
                     * @return DiskEncrypt 是否已赋值
                     * 
                     */
                    bool DiskEncryptHasBeenSet() const;

                    /**
                     * 获取是否增强
                     * @return DiskEnhance 是否增强
                     * 
                     */
                    uint64_t GetDiskEnhance() const;

                    /**
                     * 设置是否增强
                     * @param _diskEnhance 是否增强
                     * 
                     */
                    void SetDiskEnhance(const uint64_t& _diskEnhance);

                    /**
                     * 判断参数 DiskEnhance 是否已赋值
                     * @return DiskEnhance 是否已赋值
                     * 
                     */
                    bool DiskEnhanceHasBeenSet() const;

                    /**
                     * 获取是否lvm
                     * @return IsLvm 是否lvm
                     * 
                     */
                    uint64_t GetIsLvm() const;

                    /**
                     * 设置是否lvm
                     * @param _isLvm 是否lvm
                     * 
                     */
                    void SetIsLvm(const uint64_t& _isLvm);

                    /**
                     * 判断参数 IsLvm 是否已赋值
                     * @return IsLvm 是否已赋值
                     * 
                     */
                    bool IsLvmHasBeenSet() const;

                    /**
                     * 获取是否本地盘
                     * @return IsLocalDiskType 是否本地盘
                     * 
                     */
                    bool GetIsLocalDiskType() const;

                    /**
                     * 设置是否本地盘
                     * @param _isLocalDiskType 是否本地盘
                     * 
                     */
                    void SetIsLocalDiskType(const bool& _isLocalDiskType);

                    /**
                     * 判断参数 IsLocalDiskType 是否已赋值
                     * @return IsLocalDiskType 是否已赋值
                     * 
                     */
                    bool IsLocalDiskTypeHasBeenSet() const;

                private:

                    /**
                     * 机器类型
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 磁盘类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 磁盘最小值
                     */
                    uint64_t m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 中刻度值
                     */
                    uint64_t m_med;
                    bool m_medHasBeenSet;

                    /**
                     * 磁盘最大值
                     */
                    uint64_t m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 磁盘最小个数
                     */
                    uint64_t m_diskCountMin;
                    bool m_diskCountMinHasBeenSet;

                    /**
                     * 磁盘最大个数
                     */
                    uint64_t m_diskCountMax;
                    bool m_diskCountMaxHasBeenSet;

                    /**
                     * 是否加密盘
                     */
                    uint64_t m_diskEncrypt;
                    bool m_diskEncryptHasBeenSet;

                    /**
                     * 是否增强
                     */
                    uint64_t m_diskEnhance;
                    bool m_diskEnhanceHasBeenSet;

                    /**
                     * 是否lvm
                     */
                    uint64_t m_isLvm;
                    bool m_isLvmHasBeenSet;

                    /**
                     * 是否本地盘
                     */
                    bool m_isLocalDiskType;
                    bool m_isLocalDiskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_NODETYPEDISKSIZERANGE_H_
