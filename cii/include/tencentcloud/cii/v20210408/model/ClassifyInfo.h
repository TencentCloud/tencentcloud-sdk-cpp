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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_CLASSIFYINFO_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_CLASSIFYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 报告分类信息
                */
                class ClassifyInfo : public AbstractModel
                {
                public:
                    ClassifyInfo();
                    ~ClassifyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取一级分类
                     * @return FirstClass 一级分类
                     * 
                     */
                    std::string GetFirstClass() const;

                    /**
                     * 设置一级分类
                     * @param _firstClass 一级分类
                     * 
                     */
                    void SetFirstClass(const std::string& _firstClass);

                    /**
                     * 判断参数 FirstClass 是否已赋值
                     * @return FirstClass 是否已赋值
                     * 
                     */
                    bool FirstClassHasBeenSet() const;

                    /**
                     * 获取二级分类
                     * @return SecondClass 二级分类
                     * 
                     */
                    std::string GetSecondClass() const;

                    /**
                     * 设置二级分类
                     * @param _secondClass 二级分类
                     * 
                     */
                    void SetSecondClass(const std::string& _secondClass);

                    /**
                     * 判断参数 SecondClass 是否已赋值
                     * @return SecondClass 是否已赋值
                     * 
                     */
                    bool SecondClassHasBeenSet() const;

                    /**
                     * 获取三级分类
                     * @return ThirdClass 三级分类
                     * 
                     */
                    std::string GetThirdClass() const;

                    /**
                     * 设置三级分类
                     * @param _thirdClass 三级分类
                     * 
                     */
                    void SetThirdClass(const std::string& _thirdClass);

                    /**
                     * 判断参数 ThirdClass 是否已赋值
                     * @return ThirdClass 是否已赋值
                     * 
                     */
                    bool ThirdClassHasBeenSet() const;

                    /**
                     * 获取一级分类序号
                     * @return FirstClassId 一级分类序号
                     * 
                     */
                    uint64_t GetFirstClassId() const;

                    /**
                     * 设置一级分类序号
                     * @param _firstClassId 一级分类序号
                     * 
                     */
                    void SetFirstClassId(const uint64_t& _firstClassId);

                    /**
                     * 判断参数 FirstClassId 是否已赋值
                     * @return FirstClassId 是否已赋值
                     * 
                     */
                    bool FirstClassIdHasBeenSet() const;

                    /**
                     * 获取二级分类序号
                     * @return SecondClassId 二级分类序号
                     * 
                     */
                    uint64_t GetSecondClassId() const;

                    /**
                     * 设置二级分类序号
                     * @param _secondClassId 二级分类序号
                     * 
                     */
                    void SetSecondClassId(const uint64_t& _secondClassId);

                    /**
                     * 判断参数 SecondClassId 是否已赋值
                     * @return SecondClassId 是否已赋值
                     * 
                     */
                    bool SecondClassIdHasBeenSet() const;

                    /**
                     * 获取三级分类序号
                     * @return ThirdClassId 三级分类序号
                     * 
                     */
                    uint64_t GetThirdClassId() const;

                    /**
                     * 设置三级分类序号
                     * @param _thirdClassId 三级分类序号
                     * 
                     */
                    void SetThirdClassId(const uint64_t& _thirdClassId);

                    /**
                     * 判断参数 ThirdClassId 是否已赋值
                     * @return ThirdClassId 是否已赋值
                     * 
                     */
                    bool ThirdClassIdHasBeenSet() const;

                private:

                    /**
                     * 一级分类
                     */
                    std::string m_firstClass;
                    bool m_firstClassHasBeenSet;

                    /**
                     * 二级分类
                     */
                    std::string m_secondClass;
                    bool m_secondClassHasBeenSet;

                    /**
                     * 三级分类
                     */
                    std::string m_thirdClass;
                    bool m_thirdClassHasBeenSet;

                    /**
                     * 一级分类序号
                     */
                    uint64_t m_firstClassId;
                    bool m_firstClassIdHasBeenSet;

                    /**
                     * 二级分类序号
                     */
                    uint64_t m_secondClassId;
                    bool m_secondClassIdHasBeenSet;

                    /**
                     * 三级分类序号
                     */
                    uint64_t m_thirdClassId;
                    bool m_thirdClassIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_CLASSIFYINFO_H_
