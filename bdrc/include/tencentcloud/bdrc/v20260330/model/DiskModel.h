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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DISKMODEL_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DISKMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 云盘信息
                */
                class DiskModel : public AbstractModel
                {
                public:
                    DiskModel();
                    ~DiskModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云盘类型
                     * @return DiskType 云盘类型
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置云盘类型
                     * @param _diskType 云盘类型
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
                     * 获取云盘大小（单位GB，范围 (0, 32000]）
                     * @return DiskSize 云盘大小（单位GB，范围 (0, 32000]）
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置云盘大小（单位GB，范围 (0, 32000]）
                     * @param _diskSize 云盘大小（单位GB，范围 (0, 32000]）
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取是否随实例删除（仅 DataDisks 元素能传）
                     * @return DeleteWithInstance 是否随实例删除（仅 DataDisks 元素能传）
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置是否随实例删除（仅 DataDisks 元素能传）
                     * @param _deleteWithInstance 是否随实例删除（仅 DataDisks 元素能传）
                     * 
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     * 
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                private:

                    /**
                     * 云盘类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 云盘大小（单位GB，范围 (0, 32000]）
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 是否随实例删除（仅 DataDisks 元素能传）
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DISKMODEL_H_
