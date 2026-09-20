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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITIMAGEDELETEDETAIL_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITIMAGEDELETEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播审核图库删除图片详细结果。
                */
                class AuditImageDeleteDetail : public AbstractModel
                {
                public:
                    AuditImageDeleteDetail();
                    ~AuditImageDeleteDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>图片 Id。</p>
                     * @return ImageId <p>图片 Id。</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>图片 Id。</p>
                     * @param _imageId <p>图片 Id。</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>图片名称</p>
                     * @return Name <p>图片名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>图片名称</p>
                     * @param _name <p>图片名称</p>
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
                     * 获取<p>删除状态。<br>0：成功。<br>10104：原图不存在。<br>40201:  图库删图失败。<br>20201:  图库记录删除失败。</p>
                     * @return Status <p>删除状态。<br>0：成功。<br>10104：原图不存在。<br>40201:  图库删图失败。<br>20201:  图库记录删除失败。</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>删除状态。<br>0：成功。<br>10104：原图不存在。<br>40201:  图库删图失败。<br>20201:  图库记录删除失败。</p>
                     * @param _status <p>删除状态。<br>0：成功。<br>10104：原图不存在。<br>40201:  图库删图失败。<br>20201:  图库记录删除失败。</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     * @return Label <p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     * @param _label <p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>错误信息。</p>
                     * @return ErrMsg <p>错误信息。</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>错误信息。</p>
                     * @param _errMsg <p>错误信息。</p>
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
                     * <p>图片 Id。</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>图片名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>删除状态。<br>0：成功。<br>10104：原图不存在。<br>40201:  图库删图失败。<br>20201:  图库记录删除失败。</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>错误信息。</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITIMAGEDELETEDETAIL_H_
