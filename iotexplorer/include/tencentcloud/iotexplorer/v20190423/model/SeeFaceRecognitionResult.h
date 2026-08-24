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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEFACERECOGNITIONRESULT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEFACERECOGNITIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeTaskPersonInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 人脸识别结果
                */
                class SeeFaceRecognitionResult : public AbstractModel
                {
                public:
                    SeeFaceRecognitionResult();
                    ~SeeFaceRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别到的人员列表
                     * @return Persons 识别到的人员列表
                     * 
                     */
                    std::vector<SeeTaskPersonInfo> GetPersons() const;

                    /**
                     * 设置识别到的人员列表
                     * @param _persons 识别到的人员列表
                     * 
                     */
                    void SetPersons(const std::vector<SeeTaskPersonInfo>& _persons);

                    /**
                     * 判断参数 Persons 是否已赋值
                     * @return Persons 是否已赋值
                     * 
                     */
                    bool PersonsHasBeenSet() const;

                private:

                    /**
                     * 识别到的人员列表
                     */
                    std::vector<SeeTaskPersonInfo> m_persons;
                    bool m_personsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEFACERECOGNITIONRESULT_H_
