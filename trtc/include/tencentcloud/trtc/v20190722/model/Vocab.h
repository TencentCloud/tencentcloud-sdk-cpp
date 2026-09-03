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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOCAB_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOCAB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 词表内容
                */
                class Vocab : public AbstractModel
                {
                public:
                    Vocab();
                    ~Vocab() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>热词表名称</p>
                     * @return Name <p>热词表名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>热词表名称</p>
                     * @param _name <p>热词表名称</p>
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
                     * 获取<p>热词表描述</p>
                     * @return Description <p>热词表描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>热词表描述</p>
                     * @param _description <p>热词表描述</p>
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
                     * 获取<p>热词表ID</p>
                     * @return VocabId <p>热词表ID</p>
                     * 
                     */
                    std::string GetVocabId() const;

                    /**
                     * 设置<p>热词表ID</p>
                     * @param _vocabId <p>热词表ID</p>
                     * 
                     */
                    void SetVocabId(const std::string& _vocabId);

                    /**
                     * 判断参数 VocabId 是否已赋值
                     * @return VocabId 是否已赋值
                     * 
                     */
                    bool VocabIdHasBeenSet() const;

                    /**
                     * 获取<p>词权重列表</p>
                     * @return WordWeights <p>词权重列表</p>
                     * 
                     */
                    std::vector<HotWord> GetWordWeights() const;

                    /**
                     * 设置<p>词权重列表</p>
                     * @param _wordWeights <p>词权重列表</p>
                     * 
                     */
                    void SetWordWeights(const std::vector<HotWord>& _wordWeights);

                    /**
                     * 判断参数 WordWeights 是否已赋值
                     * @return WordWeights 是否已赋值
                     * 
                     */
                    bool WordWeightsHasBeenSet() const;

                    /**
                     * 获取<p>词表创建时间</p>
                     * @return CreateTime <p>词表创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>词表创建时间</p>
                     * @param _createTime <p>词表创建时间</p>
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
                     * 获取<p>词表更新时间</p>
                     * @return UpdateTime <p>词表更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>词表更新时间</p>
                     * @param _updateTime <p>词表更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>热词表状态，1为默认状态即在识别时默认加载该热词表进行识别，0为初始状态</p>
                     * @return State <p>热词表状态，1为默认状态即在识别时默认加载该热词表进行识别，0为初始状态</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置<p>热词表状态，1为默认状态即在识别时默认加载该热词表进行识别，0为初始状态</p>
                     * @param _state <p>热词表状态，1为默认状态即在识别时默认加载该热词表进行识别，0为初始状态</p>
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * <p>热词表名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>热词表描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>热词表ID</p>
                     */
                    std::string m_vocabId;
                    bool m_vocabIdHasBeenSet;

                    /**
                     * <p>词权重列表</p>
                     */
                    std::vector<HotWord> m_wordWeights;
                    bool m_wordWeightsHasBeenSet;

                    /**
                     * <p>词表创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>词表更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>热词表状态，1为默认状态即在识别时默认加载该热词表进行识别，0为初始状态</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOCAB_H_
