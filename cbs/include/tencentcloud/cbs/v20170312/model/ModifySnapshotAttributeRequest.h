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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTATTRIBUTEREQUEST_H_

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
                * ModifySnapshotAttribute请求参数结构体
                */
                class ModifySnapshotAttributeRequest : public AbstractModel
                {
                public:
                    ModifySnapshotAttributeRequest();
                    ~ModifySnapshotAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照ID, 可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     * @return SnapshotId 快照ID, 可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置快照ID, 可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     * @param SnapshotId 快照ID, 可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取新的快照名称。最长为60个字符。
                     * @return SnapshotName 新的快照名称。最长为60个字符。
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置新的快照名称。最长为60个字符。
                     * @param SnapshotName 新的快照名称。最长为60个字符。
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取快照的保留时间，FALSE表示非永久保留，TRUE表示永久保留。仅支持将非永久快照修改为永久快照。
                     * @return IsPermanent 快照的保留时间，FALSE表示非永久保留，TRUE表示永久保留。仅支持将非永久快照修改为永久快照。
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置快照的保留时间，FALSE表示非永久保留，TRUE表示永久保留。仅支持将非永久快照修改为永久快照。
                     * @param IsPermanent 快照的保留时间，FALSE表示非永久保留，TRUE表示永久保留。仅支持将非永久快照修改为永久快照。
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     */
                    bool IsPermanentHasBeenSet() const;

                private:

                    /**
                     * 快照ID, 可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 新的快照名称。最长为60个字符。
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 快照的保留时间，FALSE表示非永久保留，TRUE表示永久保留。仅支持将非永久快照修改为永久快照。
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTATTRIBUTEREQUEST_H_
