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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_PYTHONSPARKIMAGE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_PYTHONSPARKIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * python-spark镜像信息。
                */
                class PythonSparkImage : public AbstractModel
                {
                public:
                    PythonSparkImage();
                    ~PythonSparkImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取spark镜像唯一id
                     * @return SparkImageId spark镜像唯一id
                     * 
                     */
                    std::string GetSparkImageId() const;

                    /**
                     * 设置spark镜像唯一id
                     * @param _sparkImageId spark镜像唯一id
                     * 
                     */
                    void SetSparkImageId(const std::string& _sparkImageId);

                    /**
                     * 判断参数 SparkImageId 是否已赋值
                     * @return SparkImageId 是否已赋值
                     * 
                     */
                    bool SparkImageIdHasBeenSet() const;

                    /**
                     * 获取集群小版本镜像id
                     * @return ChildImageVersionId 集群小版本镜像id
                     * 
                     */
                    std::string GetChildImageVersionId() const;

                    /**
                     * 设置集群小版本镜像id
                     * @param _childImageVersionId 集群小版本镜像id
                     * 
                     */
                    void SetChildImageVersionId(const std::string& _childImageVersionId);

                    /**
                     * 判断参数 ChildImageVersionId 是否已赋值
                     * @return ChildImageVersionId 是否已赋值
                     * 
                     */
                    bool ChildImageVersionIdHasBeenSet() const;

                    /**
                     * 获取spark镜像名称
                     * @return SparkImageVersion spark镜像名称
                     * 
                     */
                    std::string GetSparkImageVersion() const;

                    /**
                     * 设置spark镜像名称
                     * @param _sparkImageVersion spark镜像名称
                     * 
                     */
                    void SetSparkImageVersion(const std::string& _sparkImageVersion);

                    /**
                     * 判断参数 SparkImageVersion 是否已赋值
                     * @return SparkImageVersion 是否已赋值
                     * 
                     */
                    bool SparkImageVersionHasBeenSet() const;

                    /**
                     * 获取spark镜像描述信息
                     * @return Description spark镜像描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置spark镜像描述信息
                     * @param _description spark镜像描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * spark镜像唯一id
                     */
                    std::string m_sparkImageId;
                    bool m_sparkImageIdHasBeenSet;

                    /**
                     * 集群小版本镜像id
                     */
                    std::string m_childImageVersionId;
                    bool m_childImageVersionIdHasBeenSet;

                    /**
                     * spark镜像名称
                     */
                    std::string m_sparkImageVersion;
                    bool m_sparkImageVersionHasBeenSet;

                    /**
                     * spark镜像描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_PYTHONSPARKIMAGE_H_
