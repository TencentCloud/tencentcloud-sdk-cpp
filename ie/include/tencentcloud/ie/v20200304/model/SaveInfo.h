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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_SAVEINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_SAVEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/CosInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 任务存储信息
                */
                class SaveInfo : public AbstractModel
                {
                public:
                    SaveInfo();
                    ~SaveInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储类型，可选值： 
1：CosInfo。
                     * @return Type 存储类型，可选值： 
1：CosInfo。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置存储类型，可选值： 
1：CosInfo。
                     * @param _type 存储类型，可选值： 
1：CosInfo。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Cos形式存储信息，当Type等于1时必选。
                     * @return CosInfo Cos形式存储信息，当Type等于1时必选。
                     * 
                     */
                    CosInfo GetCosInfo() const;

                    /**
                     * 设置Cos形式存储信息，当Type等于1时必选。
                     * @param _cosInfo Cos形式存储信息，当Type等于1时必选。
                     * 
                     */
                    void SetCosInfo(const CosInfo& _cosInfo);

                    /**
                     * 判断参数 CosInfo 是否已赋值
                     * @return CosInfo 是否已赋值
                     * 
                     */
                    bool CosInfoHasBeenSet() const;

                    /**
                     * 获取存储信息ID标记，用于多个输出场景。部分任务支持多输出时，一般要求必选。
ID只能包含字母、数字、下划线、中划线，长读不能超过128。
                     * @return Id 存储信息ID标记，用于多个输出场景。部分任务支持多输出时，一般要求必选。
ID只能包含字母、数字、下划线、中划线，长读不能超过128。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置存储信息ID标记，用于多个输出场景。部分任务支持多输出时，一般要求必选。
ID只能包含字母、数字、下划线、中划线，长读不能超过128。
                     * @param _id 存储信息ID标记，用于多个输出场景。部分任务支持多输出时，一般要求必选。
ID只能包含字母、数字、下划线、中划线，长读不能超过128。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 存储类型，可选值： 
1：CosInfo。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Cos形式存储信息，当Type等于1时必选。
                     */
                    CosInfo m_cosInfo;
                    bool m_cosInfoHasBeenSet;

                    /**
                     * 存储信息ID标记，用于多个输出场景。部分任务支持多输出时，一般要求必选。
ID只能包含字母、数字、下划线、中划线，长读不能超过128。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_SAVEINFO_H_
