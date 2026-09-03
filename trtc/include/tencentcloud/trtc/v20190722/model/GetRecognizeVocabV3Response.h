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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_GETRECOGNIZEVOCABV3RESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_GETRECOGNIZEVOCABV3RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/HotWord.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * GetRecognizeVocabV3返回参数结构体
                */
                class GetRecognizeVocabV3Response : public AbstractModel
                {
                public:
                    GetRecognizeVocabV3Response();
                    ~GetRecognizeVocabV3Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>词表名称</p>
                     * @return Name <p>词表名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>词表 id</p>
                     * @return VocabId <p>词表 id</p>
                     * 
                     */
                    std::string GetVocabId() const;

                    /**
                     * 判断参数 VocabId 是否已赋值
                     * @return VocabId 是否已赋值
                     * 
                     */
                    bool VocabIdHasBeenSet() const;

                    /**
                     * 获取<p>热词+权重数组</p>
                     * @return WordWeights <p>热词+权重数组</p>
                     * 
                     */
                    std::vector<HotWord> GetWordWeights() const;

                    /**
                     * 判断参数 WordWeights 是否已赋值
                     * @return WordWeights 是否已赋值
                     * 
                     */
                    bool WordWeightsHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否设置默认词表</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     * @return State <p>是否设置默认词表</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * <p>词表名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>词表 id</p>
                     */
                    std::string m_vocabId;
                    bool m_vocabIdHasBeenSet;

                    /**
                     * <p>热词+权重数组</p>
                     */
                    std::vector<HotWord> m_wordWeights;
                    bool m_wordWeightsHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>是否设置默认词表</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_GETRECOGNIZEVOCABV3RESPONSE_H_
