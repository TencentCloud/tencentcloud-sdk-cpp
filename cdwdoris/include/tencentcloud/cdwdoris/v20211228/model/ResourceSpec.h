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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESOURCESPEC_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESOURCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/DiskSpec.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 资源规格描述信息
                */
                class ResourceSpec : public AbstractModel
                {
                public:
                    ResourceSpec();
                    ~ResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规格名称，例如“SCH1&quot;</p>
                     * @return Name <p>规格名称，例如“SCH1&quot;</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>规格名称，例如“SCH1&quot;</p>
                     * @param _name <p>规格名称，例如“SCH1&quot;</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>cpu核数</p>
                     * @return Cpu <p>cpu核数</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>cpu核数</p>
                     * @param _cpu <p>cpu核数</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>内存大小，单位G</p>
                     * @return Mem <p>内存大小，单位G</p>
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置<p>内存大小，单位G</p>
                     * @param _mem <p>内存大小，单位G</p>
                     * 
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取<p>分类标记，STANDARD/BIGDATA/HIGHIO分别表示标准型/大数据型/高IO</p>
                     * @return Type <p>分类标记，STANDARD/BIGDATA/HIGHIO分别表示标准型/大数据型/高IO</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>分类标记，STANDARD/BIGDATA/HIGHIO分别表示标准型/大数据型/高IO</p>
                     * @param _type <p>分类标记，STANDARD/BIGDATA/HIGHIO分别表示标准型/大数据型/高IO</p>
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
                     * 获取<p>系统盘描述信息</p>
                     * @return SystemDisk <p>系统盘描述信息</p>
                     * 
                     */
                    DiskSpec GetSystemDisk() const;

                    /**
                     * 设置<p>系统盘描述信息</p>
                     * @param _systemDisk <p>系统盘描述信息</p>
                     * 
                     */
                    void SetSystemDisk(const DiskSpec& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取<p>数据盘描述信息</p>
                     * @return DataDisk <p>数据盘描述信息</p>
                     * 
                     */
                    DiskSpec GetDataDisk() const;

                    /**
                     * 设置<p>数据盘描述信息</p>
                     * @param _dataDisk <p>数据盘描述信息</p>
                     * 
                     */
                    void SetDataDisk(const DiskSpec& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取<p>最大节点数目限制</p>
                     * @return MaxNodeSize <p>最大节点数目限制</p>
                     * 
                     */
                    int64_t GetMaxNodeSize() const;

                    /**
                     * 设置<p>最大节点数目限制</p>
                     * @param _maxNodeSize <p>最大节点数目限制</p>
                     * 
                     */
                    void SetMaxNodeSize(const int64_t& _maxNodeSize);

                    /**
                     * 判断参数 MaxNodeSize 是否已赋值
                     * @return MaxNodeSize 是否已赋值
                     * 
                     */
                    bool MaxNodeSizeHasBeenSet() const;

                    /**
                     * 获取<p>是否可用，false代表售罄</p>
                     * @return Available <p>是否可用，false代表售罄</p>
                     * 
                     */
                    bool GetAvailable() const;

                    /**
                     * 设置<p>是否可用，false代表售罄</p>
                     * @param _available <p>是否可用，false代表售罄</p>
                     * 
                     */
                    void SetAvailable(const bool& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取<p>规格描述信息</p>
                     * @return ComputeSpecDesc <p>规格描述信息</p>
                     * 
                     */
                    std::string GetComputeSpecDesc() const;

                    /**
                     * 设置<p>规格描述信息</p>
                     * @param _computeSpecDesc <p>规格描述信息</p>
                     * 
                     */
                    void SetComputeSpecDesc(const std::string& _computeSpecDesc);

                    /**
                     * 判断参数 ComputeSpecDesc 是否已赋值
                     * @return ComputeSpecDesc 是否已赋值
                     * 
                     */
                    bool ComputeSpecDescHasBeenSet() const;

                    /**
                     * 获取<p>cvm库存</p>
                     * @return InstanceQuota <p>cvm库存</p>
                     * 
                     */
                    int64_t GetInstanceQuota() const;

                    /**
                     * 设置<p>cvm库存</p>
                     * @param _instanceQuota <p>cvm库存</p>
                     * 
                     */
                    void SetInstanceQuota(const int64_t& _instanceQuota);

                    /**
                     * 判断参数 InstanceQuota 是否已赋值
                     * @return InstanceQuota 是否已赋值
                     * 
                     */
                    bool InstanceQuotaHasBeenSet() const;

                    /**
                     * 获取<p>计算组ID自定义后缀。1到8位小写字母、数字或连字符，首尾须为字母或数字；不传则随机生成8位后缀。最终计算组ID格式为实例ID-后缀，同时作为内核计算组名</p>
                     * @return ComputeGroupSuffix <p>计算组ID自定义后缀。1到8位小写字母、数字或连字符，首尾须为字母或数字；不传则随机生成8位后缀。最终计算组ID格式为实例ID-后缀，同时作为内核计算组名</p>
                     * 
                     */
                    std::string GetComputeGroupSuffix() const;

                    /**
                     * 设置<p>计算组ID自定义后缀。1到8位小写字母、数字或连字符，首尾须为字母或数字；不传则随机生成8位后缀。最终计算组ID格式为实例ID-后缀，同时作为内核计算组名</p>
                     * @param _computeGroupSuffix <p>计算组ID自定义后缀。1到8位小写字母、数字或连字符，首尾须为字母或数字；不传则随机生成8位后缀。最终计算组ID格式为实例ID-后缀，同时作为内核计算组名</p>
                     * 
                     */
                    void SetComputeGroupSuffix(const std::string& _computeGroupSuffix);

                    /**
                     * 判断参数 ComputeGroupSuffix 是否已赋值
                     * @return ComputeGroupSuffix 是否已赋值
                     * 
                     */
                    bool ComputeGroupSuffixHasBeenSet() const;

                private:

                    /**
                     * <p>规格名称，例如“SCH1&quot;</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>cpu核数</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存大小，单位G</p>
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>分类标记，STANDARD/BIGDATA/HIGHIO分别表示标准型/大数据型/高IO</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>系统盘描述信息</p>
                     */
                    DiskSpec m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>数据盘描述信息</p>
                     */
                    DiskSpec m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * <p>最大节点数目限制</p>
                     */
                    int64_t m_maxNodeSize;
                    bool m_maxNodeSizeHasBeenSet;

                    /**
                     * <p>是否可用，false代表售罄</p>
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * <p>规格描述信息</p>
                     */
                    std::string m_computeSpecDesc;
                    bool m_computeSpecDescHasBeenSet;

                    /**
                     * <p>cvm库存</p>
                     */
                    int64_t m_instanceQuota;
                    bool m_instanceQuotaHasBeenSet;

                    /**
                     * <p>计算组ID自定义后缀。1到8位小写字母、数字或连字符，首尾须为字母或数字；不传则随机生成8位后缀。最终计算组ID格式为实例ID-后缀，同时作为内核计算组名</p>
                     */
                    std::string m_computeGroupSuffix;
                    bool m_computeGroupSuffixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESOURCESPEC_H_
