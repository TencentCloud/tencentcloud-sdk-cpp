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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_EXPANDCAPACITYREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_EXPANDCAPACITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * ExpandCapacity请求参数结构体
                */
                class ExpandCapacityRequest : public AbstractModel
                {
                public:
                    ExpandCapacityRequest();
                    ~ExpandCapacityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统ID
                     * @return FileSystemId 文件系统ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统ID
                     * @param _fileSystemId 文件系统ID
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取新增扩容的系统容量
                     * @return ExpandedCapacity 新增扩容的系统容量
                     * 
                     */
                    uint64_t GetExpandedCapacity() const;

                    /**
                     * 设置新增扩容的系统容量
                     * @param _expandedCapacity 新增扩容的系统容量
                     * 
                     */
                    void SetExpandedCapacity(const uint64_t& _expandedCapacity);

                    /**
                     * 判断参数 ExpandedCapacity 是否已赋值
                     * @return ExpandedCapacity 是否已赋值
                     * 
                     */
                    bool ExpandedCapacityHasBeenSet() const;

                    /**
                     * 获取容量修改类型：add/sub
                     * @return ModifyType 容量修改类型：add/sub
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置容量修改类型：add/sub
                     * @param _modifyType 容量修改类型：add/sub
                     * 
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                private:

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 新增扩容的系统容量
                     */
                    uint64_t m_expandedCapacity;
                    bool m_expandedCapacityHasBeenSet;

                    /**
                     * 容量修改类型：add/sub
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_EXPANDCAPACITYREQUEST_H_
