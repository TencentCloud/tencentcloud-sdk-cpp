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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEPERSONINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEPERSONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeFaceInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 人员信息
                */
                class SeePersonInfo : public AbstractModel
                {
                public:
                    SeePersonInfo();
                    ~SeePersonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代表人脸列表
                     * @return Faces 代表人脸列表
                     * 
                     */
                    std::vector<SeeFaceInfo> GetFaces() const;

                    /**
                     * 设置代表人脸列表
                     * @param _faces 代表人脸列表
                     * 
                     */
                    void SetFaces(const std::vector<SeeFaceInfo>& _faces);

                    /**
                     * 判断参数 Faces 是否已赋值
                     * @return Faces 是否已赋值
                     * 
                     */
                    bool FacesHasBeenSet() const;

                    /**
                     * 获取是否已标记为持久记忆
                     * @return IsRemembered 是否已标记为持久记忆
                     * 
                     */
                    bool GetIsRemembered() const;

                    /**
                     * 设置是否已标记为持久记忆
                     * @param _isRemembered 是否已标记为持久记忆
                     * 
                     */
                    void SetIsRemembered(const bool& _isRemembered);

                    /**
                     * 判断参数 IsRemembered 是否已赋值
                     * @return IsRemembered 是否已赋值
                     * 
                     */
                    bool IsRememberedHasBeenSet() const;

                    /**
                     * 获取人员名称
                     * @return Name 人员名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置人员名称
                     * @param _name 人员名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取人员 ID
                     * @return PersonId 人员 ID
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员 ID
                     * @param _personId 人员 ID
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取创建来源。0：自动识别；1：用户创建
                     * @return Source 创建来源。0：自动识别；1：用户创建
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置创建来源。0：自动识别；1：用户创建
                     * @param _source 创建来源。0：自动识别；1：用户创建
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 代表人脸列表
                     */
                    std::vector<SeeFaceInfo> m_faces;
                    bool m_facesHasBeenSet;

                    /**
                     * 是否已标记为持久记忆
                     */
                    bool m_isRemembered;
                    bool m_isRememberedHasBeenSet;

                    /**
                     * 人员名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 人员 ID
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 创建来源。0：自动识别；1：用户创建
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEPERSONINFO_H_
