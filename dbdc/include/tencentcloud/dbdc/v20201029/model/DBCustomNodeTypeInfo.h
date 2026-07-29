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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DBCUSTOMNODETYPEINFO_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DBCUSTOMNODETYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DB Custom 节点机型信息。
                */
                class DBCustomNodeTypeInfo : public AbstractModel
                {
                public:
                    DBCustomNodeTypeInfo();
                    ~DBCustomNodeTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>可用区标识，如 ap-guangzhou-6</p>
                     * @return Zone <p>可用区标识，如 ap-guangzhou-6</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区标识，如 ap-guangzhou-6</p>
                     * @param _zone <p>可用区标识，如 ap-guangzhou-6</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>机型标识</p><p>枚举值：</p><ul><li>DB.SA5.2XLARGE32： DB.SA5机型</li><li>DB.AT5.8XLARGE128： DB.AT5机型</li></ul>
                     * @return NodeType <p>机型标识</p><p>枚举值：</p><ul><li>DB.SA5.2XLARGE32： DB.SA5机型</li><li>DB.AT5.8XLARGE128： DB.AT5机型</li></ul>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>机型标识</p><p>枚举值：</p><ul><li>DB.SA5.2XLARGE32： DB.SA5机型</li><li>DB.AT5.8XLARGE128： DB.AT5机型</li></ul>
                     * @param _nodeType <p>机型标识</p><p>枚举值：</p><ul><li>DB.SA5.2XLARGE32： DB.SA5机型</li><li>DB.AT5.8XLARGE128： DB.AT5机型</li></ul>
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
                     * 获取<p>机型系列，如 DB.AT5、DB.SA5</p>
                     * @return NodeFamily <p>机型系列，如 DB.AT5、DB.SA5</p>
                     * 
                     */
                    std::string GetNodeFamily() const;

                    /**
                     * 设置<p>机型系列，如 DB.AT5、DB.SA5</p>
                     * @param _nodeFamily <p>机型系列，如 DB.AT5、DB.SA5</p>
                     * 
                     */
                    void SetNodeFamily(const std::string& _nodeFamily);

                    /**
                     * 判断参数 NodeFamily 是否已赋值
                     * @return NodeFamily 是否已赋值
                     * 
                     */
                    bool NodeFamilyHasBeenSet() const;

                    /**
                     * 获取<p>CPU 核数</p><p>单位：核</p>
                     * @return CPU <p>CPU 核数</p><p>单位：核</p>
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置<p>CPU 核数</p><p>单位：核</p>
                     * @param _cPU <p>CPU 核数</p><p>单位：核</p>
                     * 
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取<p>内存大小</p><p>单位：GiB</p>
                     * @return Memory <p>内存大小</p><p>单位：GiB</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>内存大小</p><p>单位：GiB</p>
                     * @param _memory <p>内存大小</p><p>单位：GiB</p>
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>机型售卖状态</p><p>枚举值：</p><ul><li>SELL： 正常售卖</li><li>SOLD_OUT： 售罄</li></ul>
                     * @return Status <p>机型售卖状态</p><p>枚举值：</p><ul><li>SELL： 正常售卖</li><li>SOLD_OUT： 售罄</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>机型售卖状态</p><p>枚举值：</p><ul><li>SELL： 正常售卖</li><li>SOLD_OUT： 售罄</li></ul>
                     * @param _status <p>机型售卖状态</p><p>枚举值：</p><ul><li>SELL： 正常售卖</li><li>SOLD_OUT： 售罄</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>该机型允许的系统盘类型列表（如 CLOUD_BSSD、CLOUD_HSSD）；</p>
                     * @return SystemDiskTypes <p>该机型允许的系统盘类型列表（如 CLOUD_BSSD、CLOUD_HSSD）；</p>
                     * 
                     */
                    std::vector<std::string> GetSystemDiskTypes() const;

                    /**
                     * 设置<p>该机型允许的系统盘类型列表（如 CLOUD_BSSD、CLOUD_HSSD）；</p>
                     * @param _systemDiskTypes <p>该机型允许的系统盘类型列表（如 CLOUD_BSSD、CLOUD_HSSD）；</p>
                     * 
                     */
                    void SetSystemDiskTypes(const std::vector<std::string>& _systemDiskTypes);

                    /**
                     * 判断参数 SystemDiskTypes 是否已赋值
                     * @return SystemDiskTypes 是否已赋值
                     * 
                     */
                    bool SystemDiskTypesHasBeenSet() const;

                    /**
                     * 获取<p>该机型允许的数据盘类型列表（如 CLOUD_BSSD、CLOUD_HSSD）；</p>
                     * @return DataDiskTypes <p>该机型允许的数据盘类型列表（如 CLOUD_BSSD、CLOUD_HSSD）；</p>
                     * 
                     */
                    std::vector<std::string> GetDataDiskTypes() const;

                    /**
                     * 设置<p>该机型允许的数据盘类型列表（如 CLOUD_BSSD、CLOUD_HSSD）；</p>
                     * @param _dataDiskTypes <p>该机型允许的数据盘类型列表（如 CLOUD_BSSD、CLOUD_HSSD）；</p>
                     * 
                     */
                    void SetDataDiskTypes(const std::vector<std::string>& _dataDiskTypes);

                    /**
                     * 判断参数 DataDiskTypes 是否已赋值
                     * @return DataDiskTypes 是否已赋值
                     * 
                     */
                    bool DataDiskTypesHasBeenSet() const;

                private:

                    /**
                     * <p>可用区标识，如 ap-guangzhou-6</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>机型标识</p><p>枚举值：</p><ul><li>DB.SA5.2XLARGE32： DB.SA5机型</li><li>DB.AT5.8XLARGE128： DB.AT5机型</li></ul>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>机型系列，如 DB.AT5、DB.SA5</p>
                     */
                    std::string m_nodeFamily;
                    bool m_nodeFamilyHasBeenSet;

                    /**
                     * <p>CPU 核数</p><p>单位：核</p>
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * <p>内存大小</p><p>单位：GiB</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>机型售卖状态</p><p>枚举值：</p><ul><li>SELL： 正常售卖</li><li>SOLD_OUT： 售罄</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>该机型允许的系统盘类型列表（如 CLOUD_BSSD、CLOUD_HSSD）；</p>
                     */
                    std::vector<std::string> m_systemDiskTypes;
                    bool m_systemDiskTypesHasBeenSet;

                    /**
                     * <p>该机型允许的数据盘类型列表（如 CLOUD_BSSD、CLOUD_HSSD）；</p>
                     */
                    std::vector<std::string> m_dataDiskTypes;
                    bool m_dataDiskTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DBCUSTOMNODETYPEINFO_H_
