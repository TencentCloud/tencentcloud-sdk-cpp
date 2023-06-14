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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_MASTERNODEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_MASTERNODEINFO_H_

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
                * 实例专用主节点相关信息
                */
                class MasterNodeInfo : public AbstractModel
                {
                public:
                    MasterNodeInfo();
                    ~MasterNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用了专用主节点
                     * @return EnableDedicatedMaster 是否启用了专用主节点
                     * 
                     */
                    bool GetEnableDedicatedMaster() const;

                    /**
                     * 设置是否启用了专用主节点
                     * @param _enableDedicatedMaster 是否启用了专用主节点
                     * 
                     */
                    void SetEnableDedicatedMaster(const bool& _enableDedicatedMaster);

                    /**
                     * 判断参数 EnableDedicatedMaster 是否已赋值
                     * @return EnableDedicatedMaster 是否已赋值
                     * 
                     */
                    bool EnableDedicatedMasterHasBeenSet() const;

                    /**
                     * 获取专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @return MasterNodeType 专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * 
                     */
                    std::string GetMasterNodeType() const;

                    /**
                     * 设置专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @param _masterNodeType 专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * 
                     */
                    void SetMasterNodeType(const std::string& _masterNodeType);

                    /**
                     * 判断参数 MasterNodeType 是否已赋值
                     * @return MasterNodeType 是否已赋值
                     * 
                     */
                    bool MasterNodeTypeHasBeenSet() const;

                    /**
                     * 获取专用主节点个数
                     * @return MasterNodeNum 专用主节点个数
                     * 
                     */
                    uint64_t GetMasterNodeNum() const;

                    /**
                     * 设置专用主节点个数
                     * @param _masterNodeNum 专用主节点个数
                     * 
                     */
                    void SetMasterNodeNum(const uint64_t& _masterNodeNum);

                    /**
                     * 判断参数 MasterNodeNum 是否已赋值
                     * @return MasterNodeNum 是否已赋值
                     * 
                     */
                    bool MasterNodeNumHasBeenSet() const;

                    /**
                     * 获取专用主节点CPU核数
                     * @return MasterNodeCpuNum 专用主节点CPU核数
                     * 
                     */
                    uint64_t GetMasterNodeCpuNum() const;

                    /**
                     * 设置专用主节点CPU核数
                     * @param _masterNodeCpuNum 专用主节点CPU核数
                     * 
                     */
                    void SetMasterNodeCpuNum(const uint64_t& _masterNodeCpuNum);

                    /**
                     * 判断参数 MasterNodeCpuNum 是否已赋值
                     * @return MasterNodeCpuNum 是否已赋值
                     * 
                     */
                    bool MasterNodeCpuNumHasBeenSet() const;

                    /**
                     * 获取专用主节点内存大小，单位GB
                     * @return MasterNodeMemSize 专用主节点内存大小，单位GB
                     * 
                     */
                    uint64_t GetMasterNodeMemSize() const;

                    /**
                     * 设置专用主节点内存大小，单位GB
                     * @param _masterNodeMemSize 专用主节点内存大小，单位GB
                     * 
                     */
                    void SetMasterNodeMemSize(const uint64_t& _masterNodeMemSize);

                    /**
                     * 判断参数 MasterNodeMemSize 是否已赋值
                     * @return MasterNodeMemSize 是否已赋值
                     * 
                     */
                    bool MasterNodeMemSizeHasBeenSet() const;

                    /**
                     * 获取专用主节点磁盘大小，单位GB
                     * @return MasterNodeDiskSize 专用主节点磁盘大小，单位GB
                     * 
                     */
                    uint64_t GetMasterNodeDiskSize() const;

                    /**
                     * 设置专用主节点磁盘大小，单位GB
                     * @param _masterNodeDiskSize 专用主节点磁盘大小，单位GB
                     * 
                     */
                    void SetMasterNodeDiskSize(const uint64_t& _masterNodeDiskSize);

                    /**
                     * 判断参数 MasterNodeDiskSize 是否已赋值
                     * @return MasterNodeDiskSize 是否已赋值
                     * 
                     */
                    bool MasterNodeDiskSizeHasBeenSet() const;

                    /**
                     * 获取专用主节点磁盘类型
                     * @return MasterNodeDiskType 专用主节点磁盘类型
                     * 
                     */
                    std::string GetMasterNodeDiskType() const;

                    /**
                     * 设置专用主节点磁盘类型
                     * @param _masterNodeDiskType 专用主节点磁盘类型
                     * 
                     */
                    void SetMasterNodeDiskType(const std::string& _masterNodeDiskType);

                    /**
                     * 判断参数 MasterNodeDiskType 是否已赋值
                     * @return MasterNodeDiskType 是否已赋值
                     * 
                     */
                    bool MasterNodeDiskTypeHasBeenSet() const;

                private:

                    /**
                     * 是否启用了专用主节点
                     */
                    bool m_enableDedicatedMaster;
                    bool m_enableDedicatedMasterHasBeenSet;

                    /**
                     * 专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     */
                    std::string m_masterNodeType;
                    bool m_masterNodeTypeHasBeenSet;

                    /**
                     * 专用主节点个数
                     */
                    uint64_t m_masterNodeNum;
                    bool m_masterNodeNumHasBeenSet;

                    /**
                     * 专用主节点CPU核数
                     */
                    uint64_t m_masterNodeCpuNum;
                    bool m_masterNodeCpuNumHasBeenSet;

                    /**
                     * 专用主节点内存大小，单位GB
                     */
                    uint64_t m_masterNodeMemSize;
                    bool m_masterNodeMemSizeHasBeenSet;

                    /**
                     * 专用主节点磁盘大小，单位GB
                     */
                    uint64_t m_masterNodeDiskSize;
                    bool m_masterNodeDiskSizeHasBeenSet;

                    /**
                     * 专用主节点磁盘类型
                     */
                    std::string m_masterNodeDiskType;
                    bool m_masterNodeDiskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_MASTERNODEINFO_H_
