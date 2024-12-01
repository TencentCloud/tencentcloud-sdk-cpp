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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_EXAME_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_EXAME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/ResultInfo.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检结论
                */
                class Exame : public AbstractModel
                {
                public:
                    Exame();
                    ~Exame() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结论段落
                     * @return OverView 结论段落
                     * 
                     */
                    std::vector<ResultInfo> GetOverView() const;

                    /**
                     * 设置结论段落
                     * @param _overView 结论段落
                     * 
                     */
                    void SetOverView(const std::vector<ResultInfo>& _overView);

                    /**
                     * 判断参数 OverView 是否已赋值
                     * @return OverView 是否已赋值
                     * 
                     */
                    bool OverViewHasBeenSet() const;

                    /**
                     * 获取异常与建议段落
                     * @return Abnormality 异常与建议段落
                     * 
                     */
                    std::vector<ResultInfo> GetAbnormality() const;

                    /**
                     * 设置异常与建议段落
                     * @param _abnormality 异常与建议段落
                     * 
                     */
                    void SetAbnormality(const std::vector<ResultInfo>& _abnormality);

                    /**
                     * 判断参数 Abnormality 是否已赋值
                     * @return Abnormality 是否已赋值
                     * 
                     */
                    bool AbnormalityHasBeenSet() const;

                private:

                    /**
                     * 结论段落
                     */
                    std::vector<ResultInfo> m_overView;
                    bool m_overViewHasBeenSet;

                    /**
                     * 异常与建议段落
                     */
                    std::vector<ResultInfo> m_abnormality;
                    bool m_abnormalityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_EXAME_H_
