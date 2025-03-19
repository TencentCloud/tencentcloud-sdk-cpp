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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNEMPTYDIRVOLUMESOURCE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNEMPTYDIRVOLUMESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * emptydir 数据卷详细信息
                */
                class CloudBaseRunEmptyDirVolumeSource : public AbstractModel
                {
                public:
                    CloudBaseRunEmptyDirVolumeSource();
                    ~CloudBaseRunEmptyDirVolumeSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取启用emptydir数据卷
                     * @return EnableEmptyDirVolume 启用emptydir数据卷
                     * 
                     */
                    bool GetEnableEmptyDirVolume() const;

                    /**
                     * 设置启用emptydir数据卷
                     * @param _enableEmptyDirVolume 启用emptydir数据卷
                     * 
                     */
                    void SetEnableEmptyDirVolume(const bool& _enableEmptyDirVolume);

                    /**
                     * 判断参数 EnableEmptyDirVolume 是否已赋值
                     * @return EnableEmptyDirVolume 是否已赋值
                     * 
                     */
                    bool EnableEmptyDirVolumeHasBeenSet() const;

                    /**
                     * 获取"","Memory","HugePages"
                     * @return Medium "","Memory","HugePages"
                     * 
                     */
                    std::string GetMedium() const;

                    /**
                     * 设置"","Memory","HugePages"
                     * @param _medium "","Memory","HugePages"
                     * 
                     */
                    void SetMedium(const std::string& _medium);

                    /**
                     * 判断参数 Medium 是否已赋值
                     * @return Medium 是否已赋值
                     * 
                     */
                    bool MediumHasBeenSet() const;

                    /**
                     * 获取emptydir数据卷大小
                     * @return SizeLimit emptydir数据卷大小
                     * 
                     */
                    std::string GetSizeLimit() const;

                    /**
                     * 设置emptydir数据卷大小
                     * @param _sizeLimit emptydir数据卷大小
                     * 
                     */
                    void SetSizeLimit(const std::string& _sizeLimit);

                    /**
                     * 判断参数 SizeLimit 是否已赋值
                     * @return SizeLimit 是否已赋值
                     * 
                     */
                    bool SizeLimitHasBeenSet() const;

                private:

                    /**
                     * 启用emptydir数据卷
                     */
                    bool m_enableEmptyDirVolume;
                    bool m_enableEmptyDirVolumeHasBeenSet;

                    /**
                     * "","Memory","HugePages"
                     */
                    std::string m_medium;
                    bool m_mediumHasBeenSet;

                    /**
                     * emptydir数据卷大小
                     */
                    std::string m_sizeLimit;
                    bool m_sizeLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNEMPTYDIRVOLUMESOURCE_H_
