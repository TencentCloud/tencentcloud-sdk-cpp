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
                     * 
                     */
                    int64_t GetTortId() const;

                    /**
                     * 设置侵权信息ID
                     * @param _tortId 侵权信息ID
                     * 
                     */
                    void SetTortId(const int64_t& _tortId);

                    /**
                     * 判断参数 TortId 是否已赋值
                     * @return TortId 是否已赋值
                     * 
                     */
                    bool TortIdHasBeenSet() const;

                    /**
                     * 获取侵权标题
                     * @return TortTitle 侵权标题
                     * 
                     */
                    std::string GetTortTitle() const;

                    /**
                     * 设置侵权标题
                     * @param _tortTitle 侵权标题
                     * 
                     */
                    void SetTortTitle(const std::string& _tortTitle);

                    /**
                     * 判断参数 TortTitle 是否已赋值
                     * @return TortTitle 是否已赋值
                     * 
                     */
                    bool TortTitleHasBeenSet() const;

                    /**
                     * 获取侵权平台
                     * @return TortPlat 侵权平台
                     * 
                     */
                    std::string GetTortPlat() const;

                    /**
                     * 设置侵权平台
                     * @param _tortPlat 侵权平台
                     * 
                     */
                    void SetTortPlat(const std::string& _tortPlat);

                    /**
                     * 判断参数 TortPlat 是否已赋值
                     * @return TortPlat 是否已赋值
                     * 
                     */
                    bool TortPlatHasBeenSet() const;

                    /**
                     * 获取侵权链接
                     * @return TortURL 侵权链接
                     * 
                     */
                    std::string GetTortURL() const;

                    /**
                     * 设置侵权链接
                     * @param _tortURL 侵权链接
                     * 
                     */
                    void SetTortURL(const std::string& _tortURL);

                    /**
                     * 判断参数 TortURL 是否已赋值
                     * @return TortURL 是否已赋值
                     * 
                     */
                    bool TortURLHasBeenSet() const;

                    /**
                     * 获取侵权链接发布时间
                     * @return PubTime 侵权链接发布时间
                     * 
                     */
                    std::string GetPubTime() const;

                    /**
                     * 设置侵权链接发布时间
                     * @param _pubTime 侵权链接发布时间
                     * 
                     */
                    void SetPubTime(const std::string& _pubTime);

                    /**
                     * 判断参数 PubTime 是否已赋值
                     * @return PubTime 是否已赋值
                     * 
                     */
                    bool PubTimeHasBeenSet() const;

                    /**
                     * 获取作者
                     * @return Author 作者
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置作者
                     * @param _author 作者
                     * 
                     */
                    void SetAuthor(const std::string& _author);

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取发现时间
                     * @return DetectTime 发现时间
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置发现时间
                     * @param _detectTime 发现时间
                     * 
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取取证状态
                     * @return ObtainStatus 取证状态
                     * 
                     */
                    int64_t GetObtainStatus() const;

                    /**
                     * 设置取证状态
                     * @param _obtainStatus 取证状态
                     * 
                     */
                    void SetObtainStatus(const int64_t& _obtainStatus);

                    /**
                     * 判断参数 ObtainStatus 是否已赋值
                     * @return ObtainStatus 是否已赋值
                     * 
                     */
                    bool ObtainStatusHasBeenSet() const;

                    /**
                     * 获取维权状态
                     * @return RightStatus 维权状态
                     * 
                     */
                    int64_t GetRightStatus() const;

                    /**
                     * 设置维权状态
                     * @param _rightStatus 维权状态
                     * 
                     */
                    void SetRightStatus(const int64_t& _rightStatus);

                    /**
                     * 判断参数 RightStatus 是否已赋值
                     * @return RightStatus 是否已赋值
                     * 
                     */
                    bool RightStatusHasBeenSet() const;

                    /**
                     * 获取拦截状态
                     * @return BlockStatus 拦截状态
                     * 
                     */
                    int64_t GetBlockStatus() const;

                    /**
                     * 设置拦截状态
                     * @param _blockStatus 拦截状态
                     * 
                     */
                    void SetBlockStatus(const int64_t& _blockStatus);

                    /**
                     * 判断参数 BlockStatus 是否已赋值
                     * @return BlockStatus 是否已赋值
                     * 
                     */
                    bool BlockStatusHasBeenSet() const;

                    /**
                     * 获取侵权编号
                     * @return TortNum 侵权编号
                     * 
                     */
                    std::string GetTortNum() const;

                    /**
                     * 设置侵权编号
                     * @param _tortNum 侵权编号
                     * 
                     */
                    void SetTortNum(const std::string& _tortNum);

                    /**
                     * 判断参数 TortNum 是否已赋值
                     * @return TortNum 是否已赋值
                     * 
                     */
                    bool TortNumHasBeenSet() const;

                    /**
                     * 获取取证状态说明
                     * @return ObtainNote 取证状态说明
                     * 
                     */
                    std::string GetObtainNote() const;

                    /**
                     * 设置取证状态说明
                     * @param _obtainNote 取证状态说明
                     * 
                     */
                    void SetObtainNote(const std::string& _obtainNote);

                    /**
                     * 判断参数 ObtainNote 是否已赋值
                     * @return ObtainNote 是否已赋值
                     * 
                     */
                    bool ObtainNoteHasBeenSet() const;

                    /**
                     * 获取作品标题
                     * @return WorkTitle 作品标题
                     * 
                     */
                    std::string GetWorkTitle() const;

                    /**
                     * 设置作品标题
                     * @param _workTitle 作品标题
                     * 
                     */
                    void SetWorkTitle(const std::string& _workTitle);

                    /**
                     * 判断参数 WorkTitle 是否已赋值
                     * @return WorkTitle 是否已赋值
                     * 
                     */
                    bool WorkTitleHasBeenSet() const;

                    /**
                     * 获取侵权站点
                     * @return TortSite 侵权站点
                     * 
                     */
                    std::string GetTortSite() const;

                    /**
                     * 设置侵权站点
                     * @param _tortSite 侵权站点
                     * 
                     */
                    void SetTortSite(const std::string& _tortSite);

                    /**
                     * 判断参数 TortSite 是否已赋值
                     * @return TortSite 是否已赋值
                     * 
                     */
                    bool TortSiteHasBeenSet() const;

                    /**
                     * 获取ICP备案信息
                     * @return ICP ICP备案信息
                     * 
                     */
                    std::string GetICP() const;

                    /**
                     * 设置ICP备案信息
                     * @param _iCP ICP备案信息
                     * 
                     */
                    void SetICP(const std::string& _iCP);

                    /**
                     * 判断参数 ICP 是否已赋值
                     * @return ICP 是否已赋值
                     * 
                     */
                    bool ICPHasBeenSet() const;

                    /**
                     * 获取维权状态说明
                     * @return RightNote 维权状态说明
                     * 
                     */
                    std::string GetRightNote() const;

                    /**
                     * 设置维权状态说明
                     * @param _rightNote 维权状态说明
                     * 
                     */
                    void SetRightNote(const std::string& _rightNote);

                    /**
                     * 判断参数 RightNote 是否已赋值
                     * @return RightNote 是否已赋值
                     * 
                     */
                    bool RightNoteHasBeenSet() const;

                    /**
                     * 获取取证类型
                     * @return ObtainType 取证类型
                     * 
                     */
                    int64_t GetObtainType() const;

                    /**
                     * 设置取证类型
                     * @param _obtainType 取证类型
                     * 
                     */
                    void SetObtainType(const int64_t& _obtainType);

                    /**
                     * 判断参数 ObtainType 是否已赋值
                     * @return ObtainType 是否已赋值
                     * 
                     */
                    bool ObtainTypeHasBeenSet() const;

                    /**
                     * 获取拦截状态说明
                     * @return BlockNote 拦截状态说明
                     * 
                     */
                    std::string GetBlockNote() const;

                    /**
                     * 设置拦截状态说明
                     * @param _blockNote 拦截状态说明
                     * 
                     */
                    void SetBlockNote(const std::string& _blockNote);

                    /**
                     * 判断参数 BlockNote 是否已赋值
                     * @return BlockNote 是否已赋值
                     * 
                     */
                    bool BlockNoteHasBeenSet() const;

                    /**
                     * 获取作品ID
                     * @return WorkId 作品ID
                     * 
                     */
                    int64_t GetWorkId() const;

                    /**
                     * 设置作品ID
                     * @param _workId 作品ID
                     * 
                     */
                    void SetWorkId(const int64_t& _workId);

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     * 
                     */
                    bool WorkIdHasBeenSet() const;

                    /**
                     * 获取作品名称
                     * @return WorkName 作品名称
                     * 
                     */
                    std::string GetWorkName() const;

                    /**
                     * 设置作品名称
                     * @param _workName 作品名称
                     * 
                     */
                    void SetWorkName(const std::string& _workName);

                    /**
                     * 判断参数 WorkName 是否已赋值
                     * @return WorkName 是否已赋值
                     * 
                     */
                    bool WorkNameHasBeenSet() const;

                    /**
                     * 获取授权书状态
                     * @return AuthStatus 授权书状态
                     * 
                     */
                    int64_t GetAuthStatus() const;

                    /**
                     * 设置授权书状态
                     * @param _authStatus 授权书状态
                     * 
                     */
                    void SetAuthStatus(const int64_t& _authStatus);

                    /**
                     * 判断参数 AuthStatus 是否已赋值
                     * @return AuthStatus 是否已赋值
                     * 
                     */
                    bool AuthStatusHasBeenSet() const;

                    /**
                     * 获取委托书状态
                     * @return CommStatus 委托书状态
                     * 
                     */
                    int64_t GetCommStatus() const;

                    /**
                     * 设置委托书状态
                     * @param _commStatus 委托书状态
                     * 
                     */
                    void SetCommStatus(const int64_t& _commStatus);

                    /**
                     * 判断参数 CommStatus 是否已赋值
                     * @return CommStatus 是否已赋值
                     * 
                     */
                    bool CommStatusHasBeenSet() const;

                    /**
                     * 获取存证证书状态
                     * @return EvidenceStatus 存证证书状态
                     * 
                     */
                    int64_t GetEvidenceStatus() const;

                    /**
                     * 设置存证证书状态
                     * @param _evidenceStatus 存证证书状态
                     * 
                     */
                    void SetEvidenceStatus(const int64_t& _evidenceStatus);

                    /**
                     * 判断参数 EvidenceStatus 是否已赋值
                     * @return EvidenceStatus 是否已赋值
                     * 
                     */
                    bool EvidenceStatusHasBeenSet() const;

                    /**
                     * 获取是否著作权人
                     * @return IsProducer 是否著作权人
                     * 
                     */
                    int64_t GetIsProducer() const;

                    /**
                     * 设置是否著作权人
                     * @param _isProducer 是否著作权人
                     * 
                     */
                    void SetIsProducer(const int64_t& _isProducer);

                    /**
                     * 判断参数 IsProducer 是否已赋值
                     * @return IsProducer 是否已赋值
                     * 
                     */
                    bool IsProducerHasBeenSet() const;

                    /**
                     * 获取是否境外网址
                     * @return IsOverseas 是否境外网址
                     * 
                     */
                    int64_t GetIsOverseas() const;

                    /**
                     * 设置是否境外网址
                     * @param _isOverseas 是否境外网址
                     * 
                     */
                    void SetIsOverseas(const int64_t& _isOverseas);

                    /**
                     * 判断参数 IsOverseas 是否已赋值
                     * @return IsOverseas 是否已赋值
                     * 
                     */
                    bool IsOverseasHasBeenSet() const;

                    /**
                     * 获取ip地理位置
                     * @return IPLoc ip地理位置
                     * 
                     */
                    std::string GetIPLoc() const;

                    /**
                     * 设置ip地理位置
                     * @param _iPLoc ip地理位置
                     * 
                     */
                    void SetIPLoc(const std::string& _iPLoc);

                    /**
                     * 判断参数 IPLoc 是否已赋值
                     * @return IPLoc 是否已赋值
                     * 
                     */
                    bool IPLocHasBeenSet() const;

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
                     * 发现时间
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * 取证状态
                     */
                    int64_t m_obtainStatus;
                    bool m_obtainStatusHasBeenSet;

                    /**
                     * 维权状态
                     */
                    int64_t m_rightStatus;
                    bool m_rightStatusHasBeenSet;

                    /**
                     * 拦截状态
                     */
                    int64_t m_blockStatus;
                    bool m_blockStatusHasBeenSet;

                    /**
                     * 侵权编号
                     */
                    std::string m_tortNum;
                    bool m_tortNumHasBeenSet;

                    /**
                     * 取证状态说明
                     */
                    std::string m_obtainNote;
                    bool m_obtainNoteHasBeenSet;

                    /**
                     * 作品标题
                     */
                    std::string m_workTitle;
                    bool m_workTitleHasBeenSet;

                    /**
                     * 侵权站点
                     */
                    std::string m_tortSite;
                    bool m_tortSiteHasBeenSet;

                    /**
                     * ICP备案信息
                     */
                    std::string m_iCP;
                    bool m_iCPHasBeenSet;

                    /**
                     * 维权状态说明
                     */
                    std::string m_rightNote;
                    bool m_rightNoteHasBeenSet;

                    /**
                     * 取证类型
                     */
                    int64_t m_obtainType;
                    bool m_obtainTypeHasBeenSet;

                    /**
                     * 拦截状态说明
                     */
                    std::string m_blockNote;
                    bool m_blockNoteHasBeenSet;

                    /**
                     * 作品ID
                     */
                    int64_t m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * 作品名称
                     */
                    std::string m_workName;
                    bool m_workNameHasBeenSet;

                    /**
                     * 授权书状态
                     */
                    int64_t m_authStatus;
                    bool m_authStatusHasBeenSet;

                    /**
                     * 委托书状态
                     */
                    int64_t m_commStatus;
                    bool m_commStatusHasBeenSet;

                    /**
                     * 存证证书状态
                     */
                    int64_t m_evidenceStatus;
                    bool m_evidenceStatusHasBeenSet;

                    /**
                     * 是否著作权人
                     */
                    int64_t m_isProducer;
                    bool m_isProducerHasBeenSet;

                    /**
                     * 是否境外网址
                     */
                    int64_t m_isOverseas;
                    bool m_isOverseasHasBeenSet;

                    /**
                     * ip地理位置
                     */
                    std::string m_iPLoc;
                    bool m_iPLocHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_MONITORTORT_H_
