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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ApplySnapshot请求参数结构体
                */
                class ApplySnapshotRequest : public AbstractModel
                {
                public:
                    ApplySnapshotRequest();
                    ~ApplySnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照ID, 可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     * @return SnapshotId 快照ID, 可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置快照ID, 可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     * @param _snapshotId 快照ID, 可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取快照原云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。
                     * @return DiskId 快照原云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置快照原云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。
                     * @param _diskId 快照原云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取回滚前是否执行自动关机，仅支持回滚快照至已挂载的云硬盘时传入。
此参数为true时，AutoStartInstance才能为true。
                     * @return AutoStopInstance 回滚前是否执行自动关机，仅支持回滚快照至已挂载的云硬盘时传入。
此参数为true时，AutoStartInstance才能为true。
                     * 
                     */
                    bool GetAutoStopInstance() const;

                    /**
                     * 设置回滚前是否执行自动关机，仅支持回滚快照至已挂载的云硬盘时传入。
此参数为true时，AutoStartInstance才能为true。
                     * @param _autoStopInstance 回滚前是否执行自动关机，仅支持回滚快照至已挂载的云硬盘时传入。
此参数为true时，AutoStartInstance才能为true。
                     * 
                     */
                    void SetAutoStopInstance(const bool& _autoStopInstance);

                    /**
                     * 判断参数 AutoStopInstance 是否已赋值
                     * @return AutoStopInstance 是否已赋值
                     * 
                     */
                    bool AutoStopInstanceHasBeenSet() const;

                    /**
                     * 获取回滚完成后是否自动开机，仅支持回滚快照至已挂载的云硬盘时传入。该参数传入时，需要同时传入AutoStopInstance参数。
                     * @return AutoStartInstance 回滚完成后是否自动开机，仅支持回滚快照至已挂载的云硬盘时传入。该参数传入时，需要同时传入AutoStopInstance参数。
                     * 
                     */
                    bool GetAutoStartInstance() const;

                    /**
                     * 设置回滚完成后是否自动开机，仅支持回滚快照至已挂载的云硬盘时传入。该参数传入时，需要同时传入AutoStopInstance参数。
                     * @param _autoStartInstance 回滚完成后是否自动开机，仅支持回滚快照至已挂载的云硬盘时传入。该参数传入时，需要同时传入AutoStopInstance参数。
                     * 
                     */
                    void SetAutoStartInstance(const bool& _autoStartInstance);

                    /**
                     * 判断参数 AutoStartInstance 是否已赋值
                     * @return AutoStartInstance 是否已赋值
                     * 
                     */
                    bool AutoStartInstanceHasBeenSet() const;

                private:

                    /**
                     * 快照ID, 可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 快照原云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 回滚前是否执行自动关机，仅支持回滚快照至已挂载的云硬盘时传入。
此参数为true时，AutoStartInstance才能为true。
                     */
                    bool m_autoStopInstance;
                    bool m_autoStopInstanceHasBeenSet;

                    /**
                     * 回滚完成后是否自动开机，仅支持回滚快照至已挂载的云硬盘时传入。该参数传入时，需要同时传入AutoStopInstance参数。
                     */
                    bool m_autoStartInstance;
                    bool m_autoStartInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTREQUEST_H_
