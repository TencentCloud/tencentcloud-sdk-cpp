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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CAGE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 围笼
                */
                class Cage : public AbstractModel
                {
                public:
                    Cage();
                    ~Cage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取围笼名称
                     * @return CageName 围笼名称
                     * 
                     */
                    std::string GetCageName() const;

                    /**
                     * 设置围笼名称
                     * @param _cageName 围笼名称
                     * 
                     */
                    void SetCageName(const std::string& _cageName);

                    /**
                     * 判断参数 CageName 是否已赋值
                     * @return CageName 是否已赋值
                     * 
                     */
                    bool CageNameHasBeenSet() const;

                    /**
                     * 获取围笼审核人账号ID
                     * @return CheckerSet 围笼审核人账号ID
                     * 
                     */
                    std::vector<std::string> GetCheckerSet() const;

                    /**
                     * 设置围笼审核人账号ID
                     * @param _checkerSet 围笼审核人账号ID
                     * 
                     */
                    void SetCheckerSet(const std::vector<std::string>& _checkerSet);

                    /**
                     * 判断参数 CheckerSet 是否已赋值
                     * @return CheckerSet 是否已赋值
                     * 
                     */
                    bool CheckerSetHasBeenSet() const;

                private:

                    /**
                     * 围笼名称
                     */
                    std::string m_cageName;
                    bool m_cageNameHasBeenSet;

                    /**
                     * 围笼审核人账号ID
                     */
                    std::vector<std::string> m_checkerSet;
                    bool m_checkerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CAGE_H_
