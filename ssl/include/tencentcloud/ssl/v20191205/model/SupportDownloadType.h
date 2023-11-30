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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_SUPPORTDOWNLOADTYPE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_SUPPORTDOWNLOADTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 支持下载的类型
                */
                class SupportDownloadType : public AbstractModel
                {
                public:
                    SupportDownloadType();
                    ~SupportDownloadType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否可以下载nginx可用格式
                     * @return NGINX 是否可以下载nginx可用格式
                     * 
                     */
                    bool GetNGINX() const;

                    /**
                     * 设置是否可以下载nginx可用格式
                     * @param _nGINX 是否可以下载nginx可用格式
                     * 
                     */
                    void SetNGINX(const bool& _nGINX);

                    /**
                     * 判断参数 NGINX 是否已赋值
                     * @return NGINX 是否已赋值
                     * 
                     */
                    bool NGINXHasBeenSet() const;

                    /**
                     * 获取是否可以下载apache可用格式
                     * @return APACHE 是否可以下载apache可用格式
                     * 
                     */
                    bool GetAPACHE() const;

                    /**
                     * 设置是否可以下载apache可用格式
                     * @param _aPACHE 是否可以下载apache可用格式
                     * 
                     */
                    void SetAPACHE(const bool& _aPACHE);

                    /**
                     * 判断参数 APACHE 是否已赋值
                     * @return APACHE 是否已赋值
                     * 
                     */
                    bool APACHEHasBeenSet() const;

                    /**
                     * 获取是否可以下载tomcat可用格式
                     * @return TOMCAT 是否可以下载tomcat可用格式
                     * 
                     */
                    bool GetTOMCAT() const;

                    /**
                     * 设置是否可以下载tomcat可用格式
                     * @param _tOMCAT 是否可以下载tomcat可用格式
                     * 
                     */
                    void SetTOMCAT(const bool& _tOMCAT);

                    /**
                     * 判断参数 TOMCAT 是否已赋值
                     * @return TOMCAT 是否已赋值
                     * 
                     */
                    bool TOMCATHasBeenSet() const;

                    /**
                     * 获取是否可以下载iis可用格式
                     * @return IIS 是否可以下载iis可用格式
                     * 
                     */
                    bool GetIIS() const;

                    /**
                     * 设置是否可以下载iis可用格式
                     * @param _iIS 是否可以下载iis可用格式
                     * 
                     */
                    void SetIIS(const bool& _iIS);

                    /**
                     * 判断参数 IIS 是否已赋值
                     * @return IIS 是否已赋值
                     * 
                     */
                    bool IISHasBeenSet() const;

                    /**
                     * 获取是否可以下载JKS可用格式
                     * @return JKS 是否可以下载JKS可用格式
                     * 
                     */
                    bool GetJKS() const;

                    /**
                     * 设置是否可以下载JKS可用格式
                     * @param _jKS 是否可以下载JKS可用格式
                     * 
                     */
                    void SetJKS(const bool& _jKS);

                    /**
                     * 判断参数 JKS 是否已赋值
                     * @return JKS 是否已赋值
                     * 
                     */
                    bool JKSHasBeenSet() const;

                    /**
                     * 获取是否可以下载其他格式
                     * @return OTHER 是否可以下载其他格式
                     * 
                     */
                    bool GetOTHER() const;

                    /**
                     * 设置是否可以下载其他格式
                     * @param _oTHER 是否可以下载其他格式
                     * 
                     */
                    void SetOTHER(const bool& _oTHER);

                    /**
                     * 判断参数 OTHER 是否已赋值
                     * @return OTHER 是否已赋值
                     * 
                     */
                    bool OTHERHasBeenSet() const;

                    /**
                     * 获取是否可以下载根证书
                     * @return ROOT 是否可以下载根证书
                     * 
                     */
                    bool GetROOT() const;

                    /**
                     * 设置是否可以下载根证书
                     * @param _rOOT 是否可以下载根证书
                     * 
                     */
                    void SetROOT(const bool& _rOOT);

                    /**
                     * 判断参数 ROOT 是否已赋值
                     * @return ROOT 是否已赋值
                     * 
                     */
                    bool ROOTHasBeenSet() const;

                private:

                    /**
                     * 是否可以下载nginx可用格式
                     */
                    bool m_nGINX;
                    bool m_nGINXHasBeenSet;

                    /**
                     * 是否可以下载apache可用格式
                     */
                    bool m_aPACHE;
                    bool m_aPACHEHasBeenSet;

                    /**
                     * 是否可以下载tomcat可用格式
                     */
                    bool m_tOMCAT;
                    bool m_tOMCATHasBeenSet;

                    /**
                     * 是否可以下载iis可用格式
                     */
                    bool m_iIS;
                    bool m_iISHasBeenSet;

                    /**
                     * 是否可以下载JKS可用格式
                     */
                    bool m_jKS;
                    bool m_jKSHasBeenSet;

                    /**
                     * 是否可以下载其他格式
                     */
                    bool m_oTHER;
                    bool m_oTHERHasBeenSet;

                    /**
                     * 是否可以下载根证书
                     */
                    bool m_rOOT;
                    bool m_rOOTHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_SUPPORTDOWNLOADTYPE_H_
