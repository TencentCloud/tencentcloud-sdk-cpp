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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEIMAGEVERSION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEIMAGEVERSION_H_

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
                * 集群大版本镜像信息。
                */
                class DataEngineImageVersion : public AbstractModel
                {
                public:
                    DataEngineImageVersion();
                    ~DataEngineImageVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像大版本ID
                     * @return ImageVersionId 镜像大版本ID
                     * 
                     */
                    std::string GetImageVersionId() const;

                    /**
                     * 设置镜像大版本ID
                     * @param _imageVersionId 镜像大版本ID
                     * 
                     */
                    void SetImageVersionId(const std::string& _imageVersionId);

                    /**
                     * 判断参数 ImageVersionId 是否已赋值
                     * @return ImageVersionId 是否已赋值
                     * 
                     */
                    bool ImageVersionIdHasBeenSet() const;

                    /**
                     * 获取镜像大版本名称
                     * @return ImageVersion 镜像大版本名称
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置镜像大版本名称
                     * @param _imageVersion 镜像大版本名称
                     * 
                     */
                    void SetImageVersion(const std::string& _imageVersion);

                    /**
                     * 判断参数 ImageVersion 是否已赋值
                     * @return ImageVersion 是否已赋值
                     * 
                     */
                    bool ImageVersionHasBeenSet() const;

                    /**
                     * 获取镜像大版本描述
                     * @return Description 镜像大版本描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置镜像大版本描述
                     * @param _description 镜像大版本描述
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
                     * 获取是否为公共版本：1：公共；2：私有
                     * @return IsPublic 是否为公共版本：1：公共；2：私有
                     * 
                     */
                    uint64_t GetIsPublic() const;

                    /**
                     * 设置是否为公共版本：1：公共；2：私有
                     * @param _isPublic 是否为公共版本：1：公共；2：私有
                     * 
                     */
                    void SetIsPublic(const uint64_t& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     * 
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取集群类型：SparkSQL/PrestoSQL/SparkBatch
                     * @return EngineType 集群类型：SparkSQL/PrestoSQL/SparkBatch
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置集群类型：SparkSQL/PrestoSQL/SparkBatch
                     * @param _engineType 集群类型：SparkSQL/PrestoSQL/SparkBatch
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取版本状态：1：初始化；2：上线；3：下线
                     * @return IsSharedEngine 版本状态：1：初始化；2：上线；3：下线
                     * 
                     */
                    uint64_t GetIsSharedEngine() const;

                    /**
                     * 设置版本状态：1：初始化；2：上线；3：下线
                     * @param _isSharedEngine 版本状态：1：初始化；2：上线；3：下线
                     * 
                     */
                    void SetIsSharedEngine(const uint64_t& _isSharedEngine);

                    /**
                     * 判断参数 IsSharedEngine 是否已赋值
                     * @return IsSharedEngine 是否已赋值
                     * 
                     */
                    bool IsSharedEngineHasBeenSet() const;

                    /**
                     * 获取版本状态：1：初始化；2：上线；3：下线
                     * @return State 版本状态：1：初始化；2：上线；3：下线
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置版本状态：1：初始化；2：上线；3：下线
                     * @param _state 版本状态：1：初始化；2：上线；3：下线
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取插入时间
                     * @return InsertTime 插入时间
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置插入时间
                     * @param _insertTime 插入时间
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

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
                     * 镜像大版本ID
                     */
                    std::string m_imageVersionId;
                    bool m_imageVersionIdHasBeenSet;

                    /**
                     * 镜像大版本名称
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * 镜像大版本描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否为公共版本：1：公共；2：私有
                     */
                    uint64_t m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * 集群类型：SparkSQL/PrestoSQL/SparkBatch
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 版本状态：1：初始化；2：上线；3：下线
                     */
                    uint64_t m_isSharedEngine;
                    bool m_isSharedEngineHasBeenSet;

                    /**
                     * 版本状态：1：初始化；2：上线；3：下线
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 插入时间
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

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

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEIMAGEVERSION_H_
