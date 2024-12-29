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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_LOCALDISKTYPE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_LOCALDISKTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 本地磁盘规格
                */
                class LocalDiskType : public AbstractModel
                {
                public:
                    LocalDiskType();
                    ~LocalDiskType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本地磁盘类型。
                     * @return Type 本地磁盘类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置本地磁盘类型。
                     * @param _type 本地磁盘类型。
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
                     * 获取本地磁盘属性。
                     * @return PartitionType 本地磁盘属性。
                     * 
                     */
                    std::string GetPartitionType() const;

                    /**
                     * 设置本地磁盘属性。
                     * @param _partitionType 本地磁盘属性。
                     * 
                     */
                    void SetPartitionType(const std::string& _partitionType);

                    /**
                     * 判断参数 PartitionType 是否已赋值
                     * @return PartitionType 是否已赋值
                     * 
                     */
                    bool PartitionTypeHasBeenSet() const;

                    /**
                     * 获取本地磁盘最小值。
                     * @return MinSize 本地磁盘最小值。
                     * 
                     */
                    int64_t GetMinSize() const;

                    /**
                     * 设置本地磁盘最小值。
                     * @param _minSize 本地磁盘最小值。
                     * 
                     */
                    void SetMinSize(const int64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取本地磁盘最大值。
                     * @return MaxSize 本地磁盘最大值。
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置本地磁盘最大值。
                     * @param _maxSize 本地磁盘最大值。
                     * 
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取购买时本地盘是否为必选。取值范围：<br><li>REQUIRED：表示必选</li><li>OPTIONAL：表示可选。</li>
                     * @return Required 购买时本地盘是否为必选。取值范围：<br><li>REQUIRED：表示必选</li><li>OPTIONAL：表示可选。</li>
                     * 
                     */
                    std::string GetRequired() const;

                    /**
                     * 设置购买时本地盘是否为必选。取值范围：<br><li>REQUIRED：表示必选</li><li>OPTIONAL：表示可选。</li>
                     * @param _required 购买时本地盘是否为必选。取值范围：<br><li>REQUIRED：表示必选</li><li>OPTIONAL：表示可选。</li>
                     * 
                     */
                    void SetRequired(const std::string& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                private:

                    /**
                     * 本地磁盘类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 本地磁盘属性。
                     */
                    std::string m_partitionType;
                    bool m_partitionTypeHasBeenSet;

                    /**
                     * 本地磁盘最小值。
                     */
                    int64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * 本地磁盘最大值。
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 购买时本地盘是否为必选。取值范围：<br><li>REQUIRED：表示必选</li><li>OPTIONAL：表示可选。</li>
                     */
                    std::string m_required;
                    bool m_requiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_LOCALDISKTYPE_H_
