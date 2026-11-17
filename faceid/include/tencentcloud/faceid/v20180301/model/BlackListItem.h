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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_BLACKLISTITEM_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_BLACKLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * BlackListItem
                */
                class BlackListItem : public AbstractModel
                {
                public:
                    BlackListItem();
                    ~BlackListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>黑名单条目 ID，客户创建条目时自定义，用于回溯是哪一条命中</p>
                     * @return ModelId <p>黑名单条目 ID，客户创建条目时自定义，用于回溯是哪一条命中</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置<p>黑名单条目 ID，客户创建条目时自定义，用于回溯是哪一条命中</p>
                     * @param _modelId <p>黑名单条目 ID，客户创建条目时自定义，用于回溯是哪一条命中</p>
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取<p>条目类型。当前仅有 face（人脸）</p>
                     * @return ModelType <p>条目类型。当前仅有 face（人脸）</p>
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置<p>条目类型。当前仅有 face（人脸）</p>
                     * @param _modelType <p>条目类型。当前仅有 face（人脸）</p>
                     * 
                     */
                    void SetModelType(const std::string& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取<p>人脸相似度，字符串形式表示，保留 4 位小数，取值 0.0000–1.0000</p>
                     * @return FaceScore <p>人脸相似度，字符串形式表示，保留 4 位小数，取值 0.0000–1.0000</p>
                     * 
                     */
                    std::string GetFaceScore() const;

                    /**
                     * 设置<p>人脸相似度，字符串形式表示，保留 4 位小数，取值 0.0000–1.0000</p>
                     * @param _faceScore <p>人脸相似度，字符串形式表示，保留 4 位小数，取值 0.0000–1.0000</p>
                     * 
                     */
                    void SetFaceScore(const std::string& _faceScore);

                    /**
                     * 判断参数 FaceScore 是否已赋值
                     * @return FaceScore 是否已赋值
                     * 
                     */
                    bool FaceScoreHasBeenSet() const;

                    /**
                     * 获取<p>背景相似度</p>
                     * @return BackgroundScore <p>背景相似度</p>
                     * 
                     */
                    std::string GetBackgroundScore() const;

                    /**
                     * 设置<p>背景相似度</p>
                     * @param _backgroundScore <p>背景相似度</p>
                     * 
                     */
                    void SetBackgroundScore(const std::string& _backgroundScore);

                    /**
                     * 判断参数 BackgroundScore 是否已赋值
                     * @return BackgroundScore 是否已赋值
                     * 
                     */
                    bool BackgroundScoreHasBeenSet() const;

                private:

                    /**
                     * <p>黑名单条目 ID，客户创建条目时自定义，用于回溯是哪一条命中</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>条目类型。当前仅有 face（人脸）</p>
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * <p>人脸相似度，字符串形式表示，保留 4 位小数，取值 0.0000–1.0000</p>
                     */
                    std::string m_faceScore;
                    bool m_faceScoreHasBeenSet;

                    /**
                     * <p>背景相似度</p>
                     */
                    std::string m_backgroundScore;
                    bool m_backgroundScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_BLACKLISTITEM_H_
