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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYFILESYSTEMAUTOSCALEUPRULEREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYFILESYSTEMAUTOSCALEUPRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyFileSystemAutoScaleUpRule请求参数结构体
                */
                class ModifyFileSystemAutoScaleUpRuleRequest : public AbstractModel
                {
                public:
                    ModifyFileSystemAutoScaleUpRuleRequest();
                    ~ModifyFileSystemAutoScaleUpRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统 ID，通过查询文件系统列表获取；[DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170)
                     * @return FileSystemId 文件系统 ID，通过查询文件系统列表获取；[DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170)
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统 ID，通过查询文件系统列表获取；[DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170)
                     * @param _fileSystemId 文件系统 ID，通过查询文件系统列表获取；[DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170)
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
                     * 获取扩容阈值，范围[10-90]
                     * @return ScaleUpThreshold 扩容阈值，范围[10-90]
                     * 
                     */
                    uint64_t GetScaleUpThreshold() const;

                    /**
                     * 设置扩容阈值，范围[10-90]
                     * @param _scaleUpThreshold 扩容阈值，范围[10-90]
                     * 
                     */
                    void SetScaleUpThreshold(const uint64_t& _scaleUpThreshold);

                    /**
                     * 判断参数 ScaleUpThreshold 是否已赋值
                     * @return ScaleUpThreshold 是否已赋值
                     * 
                     */
                    bool ScaleUpThresholdHasBeenSet() const;

                    /**
                     * 获取扩容后目标阈值，范围[10-90]，该值要小于 ScaleUpThreshold
                     * @return TargetThreshold 扩容后目标阈值，范围[10-90]，该值要小于 ScaleUpThreshold
                     * 
                     */
                    uint64_t GetTargetThreshold() const;

                    /**
                     * 设置扩容后目标阈值，范围[10-90]，该值要小于 ScaleUpThreshold
                     * @param _targetThreshold 扩容后目标阈值，范围[10-90]，该值要小于 ScaleUpThreshold
                     * 
                     */
                    void SetTargetThreshold(const uint64_t& _targetThreshold);

                    /**
                     * 判断参数 TargetThreshold 是否已赋值
                     * @return TargetThreshold 是否已赋值
                     * 
                     */
                    bool TargetThresholdHasBeenSet() const;

                    /**
                     * 获取规则状态 0：关闭，1：开启；不传保留原状态
                     * @return Status 规则状态 0：关闭，1：开启；不传保留原状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置规则状态 0：关闭，1：开启；不传保留原状态
                     * @param _status 规则状态 0：关闭，1：开启；不传保留原状态
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 文件系统 ID，通过查询文件系统列表获取；[DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170)
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 扩容阈值，范围[10-90]
                     */
                    uint64_t m_scaleUpThreshold;
                    bool m_scaleUpThresholdHasBeenSet;

                    /**
                     * 扩容后目标阈值，范围[10-90]，该值要小于 ScaleUpThreshold
                     */
                    uint64_t m_targetThreshold;
                    bool m_targetThresholdHasBeenSet;

                    /**
                     * 规则状态 0：关闭，1：开启；不传保留原状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYFILESYSTEMAUTOSCALEUPRULEREQUEST_H_
