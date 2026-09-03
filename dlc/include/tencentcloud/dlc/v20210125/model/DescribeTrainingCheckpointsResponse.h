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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETRAININGCHECKPOINTSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETRAININGCHECKPOINTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SharedMountFileItem.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeTrainingCheckpoints返回参数结构体
                */
                class DescribeTrainingCheckpointsResponse : public AbstractModel
                {
                public:
                    DescribeTrainingCheckpointsResponse();
                    ~DescribeTrainingCheckpointsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>当前层级文件/目录列表</p>
                     * @return Items <p>当前层级文件/目录列表</p>
                     * 
                     */
                    std::vector<SharedMountFileItem> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取<p>当前挂载路径</p>
                     * @return MountPath <p>当前挂载路径</p>
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 判断参数 MountPath 是否已赋值
                     * @return MountPath 是否已赋值
                     * 
                     */
                    bool MountPathHasBeenSet() const;

                    /**
                     * 获取<p>当前浏览的子路径</p>
                     * @return SubPath <p>当前浏览的子路径</p>
                     * 
                     */
                    std::string GetSubPath() const;

                    /**
                     * 判断参数 SubPath 是否已赋值
                     * @return SubPath 是否已赋值
                     * 
                     */
                    bool SubPathHasBeenSet() const;

                    /**
                     * 获取<p>存储类型：COS / CFS / CFS_TURBO / GOOSEFS</p>
                     * @return StorageType <p>存储类型：COS / CFS / CFS_TURBO / GOOSEFS</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>存储路径（COS 桶路径或 CFS/GooseFSx 挂载路径）</p>
                     * @return StoragePath <p>存储路径（COS 桶路径或 CFS/GooseFSx 挂载路径）</p>
                     * 
                     */
                    std::string GetStoragePath() const;

                    /**
                     * 判断参数 StoragePath 是否已赋值
                     * @return StoragePath 是否已赋值
                     * 
                     */
                    bool StoragePathHasBeenSet() const;

                    /**
                     * 获取<p>错误或提示信息（仅在请求异常时有值）</p>
                     * @return Message <p>错误或提示信息（仅在请求异常时有值）</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>快照时间戳（仅 CFS/GooseFSx 存储时有值）</p>
                     * @return SnapshotTimestamp <p>快照时间戳（仅 CFS/GooseFSx 存储时有值）</p>
                     * 
                     */
                    int64_t GetSnapshotTimestamp() const;

                    /**
                     * 判断参数 SnapshotTimestamp 是否已赋值
                     * @return SnapshotTimestamp 是否已赋值
                     * 
                     */
                    bool SnapshotTimestampHasBeenSet() const;

                private:

                    /**
                     * <p>当前层级文件/目录列表</p>
                     */
                    std::vector<SharedMountFileItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * <p>当前挂载路径</p>
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                    /**
                     * <p>当前浏览的子路径</p>
                     */
                    std::string m_subPath;
                    bool m_subPathHasBeenSet;

                    /**
                     * <p>存储类型：COS / CFS / CFS_TURBO / GOOSEFS</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>存储路径（COS 桶路径或 CFS/GooseFSx 挂载路径）</p>
                     */
                    std::string m_storagePath;
                    bool m_storagePathHasBeenSet;

                    /**
                     * <p>错误或提示信息（仅在请求异常时有值）</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>快照时间戳（仅 CFS/GooseFSx 存储时有值）</p>
                     */
                    int64_t m_snapshotTimestamp;
                    bool m_snapshotTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETRAININGCHECKPOINTSRESPONSE_H_
