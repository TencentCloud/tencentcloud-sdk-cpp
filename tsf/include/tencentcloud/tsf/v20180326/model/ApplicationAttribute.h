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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_APPLICATIONATTRIBUTE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_APPLICATIONATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 应用列表其它字段
                */
                class ApplicationAttribute : public AbstractModel
                {
                public:
                    ApplicationAttribute();
                    ~ApplicationAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>总实例个数</p>
                     * @return InstanceCount <p>总实例个数</p>
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置<p>总实例个数</p>
                     * @param _instanceCount <p>总实例个数</p>
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>运行实例个数</p>
                     * @return RunInstanceCount <p>运行实例个数</p>
                     * 
                     */
                    int64_t GetRunInstanceCount() const;

                    /**
                     * 设置<p>运行实例个数</p>
                     * @param _runInstanceCount <p>运行实例个数</p>
                     * 
                     */
                    void SetRunInstanceCount(const int64_t& _runInstanceCount);

                    /**
                     * 判断参数 RunInstanceCount 是否已赋值
                     * @return RunInstanceCount 是否已赋值
                     * 
                     */
                    bool RunInstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>应用下部署组个数</p>
                     * @return GroupCount <p>应用下部署组个数</p>
                     * 
                     */
                    int64_t GetGroupCount() const;

                    /**
                     * 设置<p>应用下部署组个数</p>
                     * @param _groupCount <p>应用下部署组个数</p>
                     * 
                     */
                    void SetGroupCount(const int64_t& _groupCount);

                    /**
                     * 判断参数 GroupCount 是否已赋值
                     * @return GroupCount 是否已赋值
                     * 
                     */
                    bool GroupCountHasBeenSet() const;

                    /**
                     * 获取<p>运行中部署组个数</p>
                     * @return RunningGroupCount <p>运行中部署组个数</p>
                     * 
                     */
                    std::string GetRunningGroupCount() const;

                    /**
                     * 设置<p>运行中部署组个数</p>
                     * @param _runningGroupCount <p>运行中部署组个数</p>
                     * 
                     */
                    void SetRunningGroupCount(const std::string& _runningGroupCount);

                    /**
                     * 判断参数 RunningGroupCount 是否已赋值
                     * @return RunningGroupCount 是否已赋值
                     * 
                     */
                    bool RunningGroupCountHasBeenSet() const;

                    /**
                     * 获取<p>异常部署组个数</p>
                     * @return AbnormalCount <p>异常部署组个数</p>
                     * 
                     */
                    std::string GetAbnormalCount() const;

                    /**
                     * 设置<p>异常部署组个数</p>
                     * @param _abnormalCount <p>异常部署组个数</p>
                     * 
                     */
                    void SetAbnormalCount(const std::string& _abnormalCount);

                    /**
                     * 判断参数 AbnormalCount 是否已赋值
                     * @return AbnormalCount 是否已赋值
                     * 
                     */
                    bool AbnormalCountHasBeenSet() const;

                    /**
                     * 获取<p>镜像tag数量</p>
                     * @return ImageTagCount <p>镜像tag数量</p>
                     * 
                     */
                    int64_t GetImageTagCount() const;

                    /**
                     * 设置<p>镜像tag数量</p>
                     * @param _imageTagCount <p>镜像tag数量</p>
                     * 
                     */
                    void SetImageTagCount(const int64_t& _imageTagCount);

                    /**
                     * 判断参数 ImageTagCount 是否已赋值
                     * @return ImageTagCount 是否已赋值
                     * 
                     */
                    bool ImageTagCountHasBeenSet() const;

                private:

                    /**
                     * <p>总实例个数</p>
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>运行实例个数</p>
                     */
                    int64_t m_runInstanceCount;
                    bool m_runInstanceCountHasBeenSet;

                    /**
                     * <p>应用下部署组个数</p>
                     */
                    int64_t m_groupCount;
                    bool m_groupCountHasBeenSet;

                    /**
                     * <p>运行中部署组个数</p>
                     */
                    std::string m_runningGroupCount;
                    bool m_runningGroupCountHasBeenSet;

                    /**
                     * <p>异常部署组个数</p>
                     */
                    std::string m_abnormalCount;
                    bool m_abnormalCountHasBeenSet;

                    /**
                     * <p>镜像tag数量</p>
                     */
                    int64_t m_imageTagCount;
                    bool m_imageTagCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_APPLICATIONATTRIBUTE_H_
