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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DISKPARTITIONINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DISKPARTITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 磁盘分区信息
                */
                class DiskPartitionInfo : public AbstractModel
                {
                public:
                    DiskPartitionInfo();
                    ~DiskPartitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分区名称</p>
                     * @return Name <p>分区名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>分区名称</p>
                     * @param _name <p>分区名称</p>
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
                     * 获取<p>挂载路径</p>
                     * @return Path <p>挂载路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>挂载路径</p>
                     * @param _path <p>挂载路径</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>使用百分比</p>
                     * @return Percent <p>使用百分比</p>
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置<p>使用百分比</p>
                     * @param _percent <p>使用百分比</p>
                     * 
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取<p>分区大小(MB)</p>
                     * @return Size <p>分区大小(MB)</p>
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置<p>分区大小(MB)</p>
                     * @param _size <p>分区大小(MB)</p>
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>分区类型</p>
                     * @return Type <p>分区类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>分区类型</p>
                     * @param _type <p>分区类型</p>
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
                     * 获取<p>已使用(MB)</p>
                     * @return Used <p>已使用(MB)</p>
                     * 
                     */
                    uint64_t GetUsed() const;

                    /**
                     * 设置<p>已使用(MB)</p>
                     * @param _used <p>已使用(MB)</p>
                     * 
                     */
                    void SetUsed(const uint64_t& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                private:

                    /**
                     * <p>分区名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>挂载路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>使用百分比</p>
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * <p>分区大小(MB)</p>
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>分区类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>已使用(MB)</p>
                     */
                    uint64_t m_used;
                    bool m_usedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DISKPARTITIONINFO_H_
