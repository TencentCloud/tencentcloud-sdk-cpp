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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYFILESYSTEMAUTOSCALEUPRULERESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYFILESYSTEMAUTOSCALEUPRULERESPONSE_H_

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
                * ModifyFileSystemAutoScaleUpRule返回参数结构体
                */
                class ModifyFileSystemAutoScaleUpRuleResponse : public AbstractModel
                {
                public:
                    ModifyFileSystemAutoScaleUpRuleResponse();
                    ~ModifyFileSystemAutoScaleUpRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统 ID
                     * @return FileSystemId 文件系统 ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取规则状态 0：关闭，1：开启
                     * @return Status 规则状态 0：关闭，1：开启
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取扩容阈值，范围[10-90]
                     * @return ScaleUpThreshold 扩容阈值，范围[10-90]
                     * 
                     */
                    uint64_t GetScaleUpThreshold() const;

                    /**
                     * 判断参数 ScaleUpThreshold 是否已赋值
                     * @return ScaleUpThreshold 是否已赋值
                     * 
                     */
                    bool ScaleUpThresholdHasBeenSet() const;

                    /**
                     * 获取扩容后达到阈值，范围[10-90]
                     * @return TargetThreshold 扩容后达到阈值，范围[10-90]
                     * 
                     */
                    uint64_t GetTargetThreshold() const;

                    /**
                     * 判断参数 TargetThreshold 是否已赋值
                     * @return TargetThreshold 是否已赋值
                     * 
                     */
                    bool TargetThresholdHasBeenSet() const;

                private:

                    /**
                     * 文件系统 ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 规则状态 0：关闭，1：开启
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 扩容阈值，范围[10-90]
                     */
                    uint64_t m_scaleUpThreshold;
                    bool m_scaleUpThresholdHasBeenSet;

                    /**
                     * 扩容后达到阈值，范围[10-90]
                     */
                    uint64_t m_targetThreshold;
                    bool m_targetThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYFILESYSTEMAUTOSCALEUPRULERESPONSE_H_
