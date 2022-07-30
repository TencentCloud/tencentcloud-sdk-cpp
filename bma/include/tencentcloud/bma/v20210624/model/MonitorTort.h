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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_MONITORTORT_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_MONITORTORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * 监测侵权信息详情
                */
                class MonitorTort : public AbstractModel
                {
                public:
                    MonitorTort();
                    ~MonitorTort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取侵权信息ID
                     * @return TortId 侵权信息ID
                     */
                    int64_t GetTortId() const;

                    /**
                     * 设置侵权信息ID
                     * @param TortId 侵权信息ID
                     */
                    void SetTortId(const int64_t& _tortId);

                    /**
                     * 判断参数 TortId 是否已赋值
                     * @return TortId 是否已赋值
                     */
                    bool TortIdHasBeenSet() const;

                    /**
                     * 获取侵权标题
                     * @return TortTitle 侵权标题
                     */
                    std::string GetTortTitle() const;

                    /**
                     * 设置侵权标题
                     * @param TortTitle 侵权标题
                     */
                    void SetTortTitle(const std::string& _tortTitle);

                    /**
                     * 判断参数 TortTitle 是否已赋值
                     * @return TortTitle 是否已赋值
                     */
                    bool TortTitleHasBeenSet() const;

                    /**
                     * 获取侵权平台
                     * @return TortPlat 侵权平台
                     */
                    std::string GetTortPlat() const;

                    /**
                     * 设置侵权平台
                     * @param TortPlat 侵权平台
                     */
                    void SetTortPlat(const std::string& _tortPlat);

                    /**
                     * 判断参数 TortPlat 是否已赋值
                     * @return TortPlat 是否已赋值
                     */
                    bool TortPlatHasBeenSet() const;

                    /**
                     * 获取侵权链接
                     * @return TortURL 侵权链接
                     */
                    std::string GetTortURL() const;

                    /**
                     * 设置侵权链接
                     * @param TortURL 侵权链接
                     */
                    void SetTortURL(const std::string& _tortURL);

                    /**
                     * 判断参数 TortURL 是否已赋值
                     * @return TortURL 是否已赋值
                     */
                    bool TortURLHasBeenSet() const;

                    /**
                     * 获取侵权链接发布时间
                     * @return PubTime 侵权链接发布时间
                     */
                    std::string GetPubTime() const;

                    /**
                     * 设置侵权链接发布时间
                     * @param PubTime 侵权链接发布时间
                     */
                    void SetPubTime(const std::string& _pubTime);

                    /**
                     * 判断参数 PubTime 是否已赋值
                     * @return PubTime 是否已赋值
                     */
                    bool PubTimeHasBeenSet() const;

                    /**
                     * 获取作者
                     * @return Author 作者
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置作者
                     * @param Author 作者
                     */
                    void SetAuthor(const std::string& _author);

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return DetectTime xxx
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置xxx
                     * @param DetectTime xxx
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取1
                     * @return ObtainStatus 1
                     */
                    int64_t GetObtainStatus() const;

                    /**
                     * 设置1
                     * @param ObtainStatus 1
                     */
                    void SetObtainStatus(const int64_t& _obtainStatus);

                    /**
                     * 判断参数 ObtainStatus 是否已赋值
                     * @return ObtainStatus 是否已赋值
                     */
                    bool ObtainStatusHasBeenSet() const;

                    /**
                     * 获取1
                     * @return RightStatus 1
                     */
                    int64_t GetRightStatus() const;

                    /**
                     * 设置1
                     * @param RightStatus 1
                     */
                    void SetRightStatus(const int64_t& _rightStatus);

                    /**
                     * 判断参数 RightStatus 是否已赋值
                     * @return RightStatus 是否已赋值
                     */
                    bool RightStatusHasBeenSet() const;

                    /**
                     * 获取1
                     * @return BlockStatus 1
                     */
                    int64_t GetBlockStatus() const;

                    /**
                     * 设置1
                     * @param BlockStatus 1
                     */
                    void SetBlockStatus(const int64_t& _blockStatus);

                    /**
                     * 判断参数 BlockStatus 是否已赋值
                     * @return BlockStatus 是否已赋值
                     */
                    bool BlockStatusHasBeenSet() const;

                    /**
                     * 获取1
                     * @return TortNum 1
                     */
                    std::string GetTortNum() const;

                    /**
                     * 设置1
                     * @param TortNum 1
                     */
                    void SetTortNum(const std::string& _tortNum);

                    /**
                     * 判断参数 TortNum 是否已赋值
                     * @return TortNum 是否已赋值
                     */
                    bool TortNumHasBeenSet() const;

                    /**
                     * 获取1
                     * @return ObtainNote 1
                     */
                    std::string GetObtainNote() const;

                    /**
                     * 设置1
                     * @param ObtainNote 1
                     */
                    void SetObtainNote(const std::string& _obtainNote);

                    /**
                     * 判断参数 ObtainNote 是否已赋值
                     * @return ObtainNote 是否已赋值
                     */
                    bool ObtainNoteHasBeenSet() const;

                    /**
                     * 获取1
                     * @return WorkTitle 1
                     */
                    std::string GetWorkTitle() const;

                    /**
                     * 设置1
                     * @param WorkTitle 1
                     */
                    void SetWorkTitle(const std::string& _workTitle);

                    /**
                     * 判断参数 WorkTitle 是否已赋值
                     * @return WorkTitle 是否已赋值
                     */
                    bool WorkTitleHasBeenSet() const;

                private:

                    /**
                     * 侵权信息ID
                     */
                    int64_t m_tortId;
                    bool m_tortIdHasBeenSet;

                    /**
                     * 侵权标题
                     */
                    std::string m_tortTitle;
                    bool m_tortTitleHasBeenSet;

                    /**
                     * 侵权平台
                     */
                    std::string m_tortPlat;
                    bool m_tortPlatHasBeenSet;

                    /**
                     * 侵权链接
                     */
                    std::string m_tortURL;
                    bool m_tortURLHasBeenSet;

                    /**
                     * 侵权链接发布时间
                     */
                    std::string m_pubTime;
                    bool m_pubTimeHasBeenSet;

                    /**
                     * 作者
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * 1
                     */
                    int64_t m_obtainStatus;
                    bool m_obtainStatusHasBeenSet;

                    /**
                     * 1
                     */
                    int64_t m_rightStatus;
                    bool m_rightStatusHasBeenSet;

                    /**
                     * 1
                     */
                    int64_t m_blockStatus;
                    bool m_blockStatusHasBeenSet;

                    /**
                     * 1
                     */
                    std::string m_tortNum;
                    bool m_tortNumHasBeenSet;

                    /**
                     * 1
                     */
                    std::string m_obtainNote;
                    bool m_obtainNoteHasBeenSet;

                    /**
                     * 1
                     */
                    std::string m_workTitle;
                    bool m_workTitleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_MONITORTORT_H_
