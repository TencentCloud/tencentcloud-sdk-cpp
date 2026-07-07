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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITOBJECTIDENTIFYSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITOBJECTIDENTIFYSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyCosAuditObjectIdentifyStatus请求参数结构体
                */
                class ModifyCosAuditObjectIdentifyStatusRequest : public AbstractModel
                {
                public:
                    ModifyCosAuditObjectIdentifyStatusRequest();
                    ~ModifyCosAuditObjectIdentifyStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源id</p>
                     * @return ResourceId <p>资源id</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源id</p>
                     * @param _resourceId <p>资源id</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>文本识别状态</p>
                     * @return TextIdentifyStatus <p>文本识别状态</p>
                     * 
                     */
                    int64_t GetTextIdentifyStatus() const;

                    /**
                     * 设置<p>文本识别状态</p>
                     * @param _textIdentifyStatus <p>文本识别状态</p>
                     * 
                     */
                    void SetTextIdentifyStatus(const int64_t& _textIdentifyStatus);

                    /**
                     * 判断参数 TextIdentifyStatus 是否已赋值
                     * @return TextIdentifyStatus 是否已赋值
                     * 
                     */
                    bool TextIdentifyStatusHasBeenSet() const;

                    /**
                     * 获取<p>图片识别状态</p>
                     * @return ImageIdentifyStatus <p>图片识别状态</p>
                     * 
                     */
                    int64_t GetImageIdentifyStatus() const;

                    /**
                     * 设置<p>图片识别状态</p>
                     * @param _imageIdentifyStatus <p>图片识别状态</p>
                     * 
                     */
                    void SetImageIdentifyStatus(const int64_t& _imageIdentifyStatus);

                    /**
                     * 判断参数 ImageIdentifyStatus 是否已赋值
                     * @return ImageIdentifyStatus 是否已赋值
                     * 
                     */
                    bool ImageIdentifyStatusHasBeenSet() const;

                private:

                    /**
                     * <p>资源id</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>文本识别状态</p>
                     */
                    int64_t m_textIdentifyStatus;
                    bool m_textIdentifyStatusHasBeenSet;

                    /**
                     * <p>图片识别状态</p>
                     */
                    int64_t m_imageIdentifyStatus;
                    bool m_imageIdentifyStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCOSAUDITOBJECTIDENTIFYSTATUSREQUEST_H_
