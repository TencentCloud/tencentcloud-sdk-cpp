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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DUPLICATEIMAGEPERSONALREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DUPLICATEIMAGEPERSONALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DuplicateImagePersonal请求参数结构体
                */
                class DuplicateImagePersonalRequest : public AbstractModel
                {
                public:
                    DuplicateImagePersonalRequest();
                    ~DuplicateImagePersonalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源镜像名称，不包含domain。例如： tencentyun/foo:v1
                     * @return SrcImage 源镜像名称，不包含domain。例如： tencentyun/foo:v1
                     * 
                     */
                    std::string GetSrcImage() const;

                    /**
                     * 设置源镜像名称，不包含domain。例如： tencentyun/foo:v1
                     * @param _srcImage 源镜像名称，不包含domain。例如： tencentyun/foo:v1
                     * 
                     */
                    void SetSrcImage(const std::string& _srcImage);

                    /**
                     * 判断参数 SrcImage 是否已赋值
                     * @return SrcImage 是否已赋值
                     * 
                     */
                    bool SrcImageHasBeenSet() const;

                    /**
                     * 获取目的镜像名称，不包含domain。例如： tencentyun/foo:latest
                     * @return DestImage 目的镜像名称，不包含domain。例如： tencentyun/foo:latest
                     * 
                     */
                    std::string GetDestImage() const;

                    /**
                     * 设置目的镜像名称，不包含domain。例如： tencentyun/foo:latest
                     * @param _destImage 目的镜像名称，不包含domain。例如： tencentyun/foo:latest
                     * 
                     */
                    void SetDestImage(const std::string& _destImage);

                    /**
                     * 判断参数 DestImage 是否已赋值
                     * @return DestImage 是否已赋值
                     * 
                     */
                    bool DestImageHasBeenSet() const;

                private:

                    /**
                     * 源镜像名称，不包含domain。例如： tencentyun/foo:v1
                     */
                    std::string m_srcImage;
                    bool m_srcImageHasBeenSet;

                    /**
                     * 目的镜像名称，不包含domain。例如： tencentyun/foo:latest
                     */
                    std::string m_destImage;
                    bool m_destImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DUPLICATEIMAGEPERSONALREQUEST_H_
