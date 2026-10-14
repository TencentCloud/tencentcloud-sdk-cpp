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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANRESULTSNAPSHOTIMAGEURLINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANRESULTSNAPSHOTIMAGEURLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 视觉理解计划源素材 URL 信息
                */
                class VLPlanResultSnapshotImageUrlInfo : public AbstractModel
                {
                public:
                    VLPlanResultSnapshotImageUrlInfo();
                    ~VLPlanResultSnapshotImageUrlInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分析结果 ID</p>
                     * @return VLPlanResultId <p>分析结果 ID</p>
                     * 
                     */
                    std::string GetVLPlanResultId() const;

                    /**
                     * 设置<p>分析结果 ID</p>
                     * @param _vLPlanResultId <p>分析结果 ID</p>
                     * 
                     */
                    void SetVLPlanResultId(const std::string& _vLPlanResultId);

                    /**
                     * 判断参数 VLPlanResultId 是否已赋值
                     * @return VLPlanResultId 是否已赋值
                     * 
                     */
                    bool VLPlanResultIdHasBeenSet() const;

                    /**
                     * 获取<p>源素材下载 URL（失败时为空）</p>
                     * @return SourceFileURL <p>源素材下载 URL（失败时为空）</p>
                     * 
                     */
                    std::string GetSourceFileURL() const;

                    /**
                     * 设置<p>源素材下载 URL（失败时为空）</p>
                     * @param _sourceFileURL <p>源素材下载 URL（失败时为空）</p>
                     * 
                     */
                    void SetSourceFileURL(const std::string& _sourceFileURL);

                    /**
                     * 判断参数 SourceFileURL 是否已赋值
                     * @return SourceFileURL 是否已赋值
                     * 
                     */
                    bool SourceFileURLHasBeenSet() const;

                    /**
                     * 获取<p>URL 有效期（秒，失败时为 0）</p>
                     * @return Expire <p>URL 有效期（秒，失败时为 0）</p>
                     * 
                     */
                    int64_t GetExpire() const;

                    /**
                     * 设置<p>URL 有效期（秒，失败时为 0）</p>
                     * @param _expire <p>URL 有效期（秒，失败时为 0）</p>
                     * 
                     */
                    void SetExpire(const int64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                    /**
                     * 获取<p>错误信息（失败时有值）</p>
                     * @return ErrMsg <p>错误信息（失败时有值）</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>错误信息（失败时有值）</p>
                     * @param _errMsg <p>错误信息（失败时有值）</p>
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * <p>分析结果 ID</p>
                     */
                    std::string m_vLPlanResultId;
                    bool m_vLPlanResultIdHasBeenSet;

                    /**
                     * <p>源素材下载 URL（失败时为空）</p>
                     */
                    std::string m_sourceFileURL;
                    bool m_sourceFileURLHasBeenSet;

                    /**
                     * <p>URL 有效期（秒，失败时为 0）</p>
                     */
                    int64_t m_expire;
                    bool m_expireHasBeenSet;

                    /**
                     * <p>错误信息（失败时有值）</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANRESULTSNAPSHOTIMAGEURLINFO_H_
